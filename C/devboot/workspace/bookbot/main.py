from stats import *
import sys

def main():
    if len(sys.argv) < 2:
        print("Usage: python3 main.py <path_to_book>")
        sys.exit(1)
    book_path = sys.argv[1]
    text = get_book_text(book_path)
    print("============ BOOKBOT ============") 
    print(f"Analyzing book found at {book_path}...")
    print("----------- Word Count ----------")
    word_count = get_num_words(text)
    print(f"Found {word_count} total words")
    
    get_char_count = count_char(text)
    sorted_list = sorted_char_count(get_char_count)

    print("--------- Character Count -------")
    for item in sorted_list:
        if item["char"].isalpha():
            print(f"{item['char']}: {item['num']}")
    
    print("============= END ===============")

def get_book_text(path):
    with open(path) as f:
        file_contents = f.read()
        return file_contents

main()
