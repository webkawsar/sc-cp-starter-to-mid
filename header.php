<?php
/**
 * Header
 *
 * @package WordPress
 * @subpackage Twenty_Fourteen
 */
?><!DOCTYPE html>
<html <?php language_attributes(); ?>>
<head>

<meta charset="<?php bloginfo('charset'); ?>">
<meta name="viewport" content="width=device-width, initial-scale=1.0">

<meta name="keywords" content="nedjon media, nedjon, music, nigeria, mp3, lagos, gospel music, nigerian, blue pie records, dj central records, pop, gospel music, youtube music, streaming, spotify">

<title><?php bloginfo('name'); ?></title>

<link rel="shortcut icon" href="<?php echo get_template_directory_uri(); ?>/images/favicon.ico">
<link rel="pingback" href="<?php bloginfo('pingback_url'); ?>">

<?php wp_head(); ?>
<script src="<?php echo get_template_directory_uri(); ?>/js/jquery.js"></script>

<style>
.fit-vids-style{
    margin-bottom: -30px;
}
body.loading{ overflow:hidden; }
body.loading .container{ visibility:hidden; }

.wrapper,
.container{ position:relative; }

.header{
  position:relative;
  width:100%;
  z-index:1000;
  display:block;
}

.topHeader{
  display:flex;
  align-items:center;
  justify-content:space-between;
  flex-wrap:nowrap;
}

.navbar-toggle{
  display:none;
  background:none;
  border:0;
  padding:10px;
  cursor:pointer;
}

.navbar-toggle .icon-bar{
  display:block;
  width:26px;
  height:3px;
  margin:5px 0;
  background:#fff;
}


.slider{
  position:relative;
  width:100%;
  z-index:1;
}


@media (max-width:1199px){
.latincentralrecords-hero-image {
    position: relative;
    width: 100%;
    overflow: hidden;
    margin-top: -160px;
}
  .topHeader{
    flex-wrap:wrap;
    gap:10px;
  }

  /* row 1 */
  .topHeader .logo{
    order:1;
    flex:1 1 auto;
    display:flex;
    align-items:center;
  }

  .topHeader .menu{
    order:2;
    flex:0 0 auto;
  }

  .navbar-toggle{ display:block; }


  .topHeader .menu.is-open{
    order:3;
    width:100%;
    flex:1 1 100%;
  }

  .topHeader .menu ul.nav-menu{
    display:none;
    width:100%;
    background:#000;
    margin-top:8px;
    padding:0;
    list-style:none;
  }

  .topHeader .menu.is-open ul.nav-menu{
    display:block;
  }

  .topHeader .menu ul.nav-menu li{
    border-top:1px solid rgba(255,255,255,.15);
  }

  .topHeader .menu ul.nav-menu li:first-child{
    border-top:0;
  }

  .topHeader .menu ul.nav-menu a{
    display:block;
    padding:12px 15px;
    text-decoration:none;
  }

  .topHeader > .social-media{
    order:4;
    width:100%;
    display:flex;
    justify-content:flex-end;
    margin-top:6px;
    gap:8px;
  }
}

@media (max-width:1023px){
    .topHeader > .social-media {
      margin-top: -155px;
   }
    
   .topHeader .menu {
     margin-top: -46px;
   }
   .header .logo img {
   margin-top: -40px;
}
}

@media (max-width:767px){
   .topHeader .menu {
     margin-top: 4px;
     z-index: 22222;
   }
   .topHeader > .social-media {
        margin-top: -55px;
    }
}
</style>

<script>
(function($){

  function setSliderOffset(){
    var w = window.innerWidth;
    if(w <= 1199){
      var headerH = $('.header').outerHeight(true);
      $('.slider').css('margin-top', headerH + 'px');
    }else{
      $('.slider').css('margin-top','0');
    }
  }

  function menuInit(){
    var $menu = $('.topHeader .menu');
    var $btn  = $('.navbar-toggle');
    var $nav  = $('.topHeader ul.nav-menu');

    $btn.on('click', function(e){
      e.preventDefault();
      $menu.toggleClass('is-open');
      $nav.stop(true,true).slideToggle(200, setSliderOffset);
    });

    function sync(){
      if(window.innerWidth > 1199){
        $menu.removeClass('is-open');
        $nav.show();
      }else{
        if(!$menu.hasClass('is-open')) $nav.hide();
      }
      setSliderOffset();
    }

    $(window).on('resize', sync);
    sync();
  }

  $(document).ready(function(){
    menuInit();
    setSliderOffset();
    $('body').removeClass('loading');
  });

  $(window).on('load', function(){
    setSliderOffset();
    $('body').removeClass('loading');
  });

})(jQuery);
</script>

</head>

<body class="loading">

<div class="wrapper">
<div class="container">

  <!-- HEADER -->
  <div class="header">
    <div class="topHeader">
      <div class="logo">
        <a href="<?php echo esc_url(home_url('/')); ?>">
          <img src="/wp-content/uploads/2018/09/logo.png" alt="Nedjon Media">
        </a>
      </div>

      <div class="menu">
        <button class="navbar-toggle">
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
        </button>
        <?php wp_nav_menu(['menu'=>'Top_menu','menu_class'=>'nav-menu']); ?>
      </div>

      <div class="social-media">
        <?php include('social-icons.php'); ?>
      </div>
    </div>
  </div>

  <!-- SLIDER -->
  <div class="slider">
    <?php include('slider.php'); ?>
  </div>
