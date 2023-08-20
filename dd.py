

import requests
from bs4 import BeautifulSoup

url = 'https://quest.squadcast.tech/public/dom.html'

response = requests.get(url)

soup = BeautifulSoup(response.content, 'html.parser')
items = soup.find_all('item') 

if len(items) >= 3113:
    item_3113 = items[3113].text
    print("The string at the 3113th item is:", item_3113)
else:
    print("Error: Not enough items on the webpage.")