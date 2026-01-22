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

  <meta name="keywords"
    content="nedjon media, nedjon, music, nigeria, mp3, lagos, gospel music, nigerian, blue pie records, dj central records, pop, gospel music, youtube music, streaming, spotify">

  <title><?php bloginfo('name'); ?></title>

  <link rel="shortcut icon" href="<?php echo get_template_directory_uri(); ?>/images/favicon.ico">
  <link rel="pingback" href="<?php bloginfo('pingback_url'); ?>">

  <?php wp_head(); ?>
  <script src="<?php echo get_template_directory_uri(); ?>/js/jquery.js"></script>

  <style>
    .fit-vids-style {
      margin-bottom: -30px;
    }

    body.loading {
      overflow: hidden;
    }

    body.loading .container {
      visibility: hidden;
    }

    .wrapper,
    .container {
      position: relative;
    }


    .slider {
      position: relative;
      width: 100%;
      z-index: 1;
    }

    .menu_container {
      display: flex;
      justify-content: space-between;
      align-items: center;
    }

    @media only screen and (min-width: 1024px) and (max-width: 1199px) {
      .menu_container {
        align-items: flex-end;
      }
    }

    @media only screen and (min-width: 1200px) {
      .menu_container {
        flex-direction: row
      }
    }
  </style>

  <script>
    (function ($) {

      function setSliderOffset() {
        var w = window.innerWidth;
        if (w <= 1199) {
          var headerH = $('.header').outerHeight(true);
          // $('.slider').css('margin-top', headerH + 'px');
        } else {
          $('.slider').css('margin-top', '0');
        }
      }

      function menuInit() {
        var $menu = $('.topHeader .menu');
        var $btn = $('.navbar-toggle');
        var $nav = $('.topHeader ul.nav-menu');

        $btn.on('click', function (e) {
          e.preventDefault();
          $menu.toggleClass('is-open');
        });

        function sync() {
          if (window.innerWidth >= 768) {
            $menu.removeClass('is-open');
            $nav.show();
          } else {
            $nav.hide();
          }
        }

        $(window).on('resize', sync);
        sync();
      }


      $(document).ready(function () {
        menuInit();
        setSliderOffset();
        $('body').removeClass('loading');
      });

      $(window).on('load', function () {
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

          <div class="menu_container">
            <div class="menu">
              <button class="navbar-toggle">
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
              </button>

              <?php wp_nav_menu(['menu' => 'Top_menu', 'menu_class' => 'nav-menu']); ?>
            </div>

            <div class="social-media">
              <?php include('social-icons.php'); ?>
            </div>
          </div>
        </div>
      </div>

      <!-- SLIDER -->
      <div class="slider">
        <?php include('slider.php'); ?>
      </div>