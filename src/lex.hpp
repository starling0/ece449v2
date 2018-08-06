#ifndef LEX
#define LEX

#include <string>
#include <list>
#include <iostream>

class evl_token {
public:
    enum token_type {NAME, NUMBER, SINGLE};
private:
    token_type type;
    std::string str;
    int line_no;
public:
    evl_token(token_type t, std::string s, int l)
        : type(t), str(s), line_no(l) {}

    token_type get_type() const { return type; }

    std::string get_str() const { return str; }

    int get_line() const { return line_no; }

    ~evl_token() {}
}; // evl_token class

class evl_tokens {
    typedef std::list<evl_token> evl_tokens_;
    evl_tokens_ tokens;
private:
    bool extract_from_line(
        std::string line,
        int line_no
    );
public:
    evl_tokens() {}

    evl_token front() { return tokens.front(); }
    evl_tokens_::iterator begin() { return tokens.begin(); }
    evl_tokens_::iterator end() { return tokens.end(); }
    void pop_front() { tokens.pop_front(); }
    bool empty() { return tokens.empty(); }

    bool extract_file(
        std::string file_name
    );

    void display(
        std::ostream &out
    ) const;

    bool store(
        std::string file_name
    ) const;

    ~evl_tokens() {}
}; // evl_tokens class

#endif