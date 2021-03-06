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
  
  template <typename T>
  void addNumber(typename T::iterator begin, typename T::iterator end);

 private:
  const unsigned int N;
  std::multiset<int> setdata_;
};

template <typename T>
void Span::addNumber(typename T::iterator begin, typename T::iterator end) {
  for (typename T::iterator it = begin; it != end; ++it)
    setdata_.insert(*it);
}

#endif
