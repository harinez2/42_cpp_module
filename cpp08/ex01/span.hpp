#ifndef SPAN_HPP
#define SPAN_HPP

#include <set>

class Span {
 public:
  Span();
  Span(unsigned int N);
  Span(const Span& rhs);
  Span& operator=(const Span& rhs);
  ~Span();

  void addNumber(int num);
  long shortestSpan();
  long longestSpan();
  void showData();

 private:
  const unsigned int N;
  std::set<int> setdata_;
};

#endif
