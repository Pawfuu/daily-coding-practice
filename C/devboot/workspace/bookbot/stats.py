def get_num_words(book):
    split = book.split()
    return len(split)

def count_char(text):
    counter_dict = {}
    for char in text:
        lowered = char.lower()
        if lowered in counter_dict:
            counter_dict[lowered] += 1
        else:
            counter_dict[lowered] = 1
    return counter_dict

def sorted_char_count(dictionary):
    new_dict = []
    for key, value in dictionary.items():
        format = {"char": key, "num": value}
        new_dict.append(format)

    def sort_on(d):
        return d["num"]
    

    new_dict.sort(reverse=True, key=sort_on)
    return new_dict



