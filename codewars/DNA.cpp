#include <string>

std::string DNAStrand(const std::string& dna)
{
  std::string str;
  for (int i = 0; i < dna.size(); ++i) {
    if (dna[i] == 'A') str += 'T';
    else if (dna[i] == 'T') str += 'A';
    else if (dna[i] == 'C') str += 'G';
    else if (dna[i] == 'G') str += 'C';
  }
  return str;
}
