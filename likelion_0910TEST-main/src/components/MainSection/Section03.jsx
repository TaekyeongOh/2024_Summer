import React from 'react';
import Slider from 'react-slick';
import 'slick-carousel/slick/slick.css';
import 'slick-carousel/slick/slick-theme.css';

const Section03 = () => {
  const settings = {
    dots: true,
    infinite: true,
    slidesToShow: 1,
    slidesToScroll: 1,
    autoplay: true,
    autoplaySpeed: 1500,
    rtl: false,
  };

  return (
    <div>
      <Slider {...settings}>
        <div>
          <h3 style={{ 
            backgroundImage: 'url(https://textbook.jihak.co.kr/img/bg_mvsimg6.png)', 
            backgroundSize: 'cover',
            backgroundPosition: 'center',
            width: '1280px', 
            height: '800px' 
          }}></h3>
        </div>
        <div>
          <h3 style={{ 
            backgroundImage: 'url(https://textbook.jihak.co.kr/img/bg_mvsimg5.png)', 
            backgroundSize: 'cover',
            backgroundPosition: 'center',
            width: '1280px', 
            height: '800px' 
          }}></h3>
        </div>
        <div>
          <h3 style={{ 
            backgroundImage: 'url(https://textbook.jihak.co.kr/img/bg_mvsimg4.png)', 
            backgroundSize: 'cover',
            backgroundPosition: 'center',
            width: '1280px', 
            height: '800px' 
          }}></h3>
        </div>
        <div>
          <h3 style={{ 
            backgroundImage: 'url(https://textbook.jihak.co.kr/img/bg_mvsimg3.png)', 
            backgroundSize: 'cover',
            backgroundPosition: 'center',
            width: '1280px', 
            height: '800px' 
          }}></h3>
        </div>
      </Slider>
    </div>
  );
}

export default Section03;
