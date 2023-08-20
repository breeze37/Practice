import React, { useEffect, useState } from 'react';
import axios from 'axios';

const MyComponent = () => {
  const [stringItem, setStringItem] = useState('');

  useEffect(() => {
    const fetchData = async () => {
      try {
        const response = await axios.get('https://quest.squadcast.tech/public/dom.html');
        const parser = new DOMParser();
        const htmlDocument = parser.parseFromString(response.data, 'text/html');
        const items = htmlDocument.getElementsByTagName('li');
        if (items.length >= 2514) {
          const item2514 = items[2513].textContent.trim();
          setStringItem(item2514);
        } else {
          console.log('There are not enough items on the webpage.');
        }
      } catch (error) {
        console.log('Error:', error);
      }
    };

    fetchData();
  }, []);

  return (
    <div>
      <h1>String in the 2514th item:</h1>
      <p>{stringItem}</p>
    </div>
  );
};

export default MyComponent;