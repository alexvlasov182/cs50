#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Maximum number of candidates
#define MAX 8

// Each candidate has a name and number of votes
typedef struct 
{
  string name;
  int votes;
} candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates in the election
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
  // Check correct use
  if (argc < 2)
  {
    printf("Usage: plurality [candidate...]\n");
    return 1;
  }

  // Put candidate names into the array
  candidate_count = argc - 1;
  if (candidate_count > MAX)
  {
    printf("Maximum number of candidates is %i\n", MAX);
    return 2;
  }
  for (int i = 0; i < candidate_count; i++)
  {
    candidates[i].name = argv[i + 1];
    candidates[i].votes = 0;
  }

  // Ask how many voters
  int voter_count = get_int("Number of voters: ");

  // Each voter makes a choice
  for (int i = 0; i < voter_count; i++)
  {
    string name = get_string("Vote: ");

    // If name is not found, show error
    if (!vote(name))
    {
      printf("Invalid vote.\n");
    }
  }

  // Print the winner(s)
  print_winner();
}

// Add one vote to a candidate if the name is correct
bool vote(string name)
{
  for (int i = 0; i < candidate_count; i++)
  {
    if (strcmp(candidates[i].name, name) == 0)
    {
      candidates[i].votes++;
      return true;
    }
  }
  return false;
}

// Print the candidate(s) with the most votes
void print_winner(void)
{

  int maximum_vote = 0;

  // Find the biggest vote count
  for (int i = 0; i < candidate_count; i++)
  {
    if (candidates[i].votes > maximum_vote)
    {
      maximum_vote = candidates[i].votes;
    }
  }

  // Print all candidates who have the biggest vote count
  for (int i = 0; i < candidate_count; i++)
  {
    if (candidates[i].votes == maximum_vote)
    {
      printf("%s\n", candidates[i].name);
    }
  }
}
