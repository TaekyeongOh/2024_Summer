import { Swiper, SwiperSlide } from "swiper/react";
import SwiperCore, {Navigation, Pagination} from "swiper";
import "./swiper/css";
import "./swiper/css/pagination.css";
import "./swiper/css/navigation.css";

SwiperCore.use([Navigation, Pagination]);

const SwiperComponent =({children}) =>{
    return(
        <Swiper
          spaceBetween={50}
          slidesPerView={3}
          scrollbar={{draggable:true}}
          navigation
          pagination={{clickable:true}}
          breakpoints={{
            768: {
                slidesPerView: 2,
            },
          }}
        >
            {children.map((child, index)=>(
                <SwiperSlide key={index}>{child}</SwiperSlide>
            ))}
        </Swiper>
    )
}

export default SwiperComponent