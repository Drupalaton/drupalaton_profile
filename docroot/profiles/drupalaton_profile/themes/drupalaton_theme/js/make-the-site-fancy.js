(function ($) {
  Drupal.behaviors.drupalaton_theme = {
    attach: function (context) {   
      
      var nav = responsiveNav("#nav");

      var width = $(window).width();
      
      // navigation position settings
      function addclasstonav() {
        $window = $(window);
        var $nav_height = $('.navigation').height();
        if($window.scrollTop() > $nav_height) {
          $('.navigation').addClass('fixed');
          $nav_height += 20;
          $('section').css('padding-top', $nav_height + 'px');
        }
        $window.scroll(function () {
          // lock the menu itself
          $nav_height = $('.navigation').height();
          if ($window.scrollTop() > $nav_height) {
            $('.navigation').addClass('fixed');
            $nav_height += 20;
            $('section').css('padding-top', $nav_height + 'px');
          }
          else {
            $('.navigation').removeClass('fixed');
          }
        });
      }
      
      // Parallax elements move settings
      var scrollorama = $.scrollorama({ 
        blocks: '.scrollorama'
      });
      
      // function in normal width monitor, wider than 980 px
      if (width >= 980) {
        addclasstonav();
        
        scrollorama
        .animate('#bigboat', { delay: 0, duration: 1200, property: 'left', start: 100, end: 900  })
        .animate('#smallboat', { delay: 0, duration: 1200, property: 'left', start: 200, end: 850  })
        .animate('.cloud1', { delay: 0, duration: 1200, property: 'left', start: 0, end: 650  })
        .animate('.cloud2', { delay: 0, duration: 1200, property: 'left', start: 60, end: 650  })
        .animate('.cloud3', { delay: 0, duration: 1200, property: 'left', start: 740, end: 650  })
        .animate('.cloud4', { delay: 0, duration: 1200, property: 'left', start: 1050, end: 650  })
        .animate('.cloud5', { delay: 0, duration: 1200, property: 'left', start: 350, end: 650  })
        
        .animate('.cloud6', { delay: 0, duration: 1200, property: 'left', start: 750, end: 650  })
        .animate('.cloud7', { delay: 0, duration: 1200, property: 'left', start: 940, end: 650  })
        .animate('.cloud8', { delay: 0, duration: 1200, property: 'left', start: 900, end: 650  })
        .animate('.cloud9', { delay: 0, duration: 1200, property: 'left', start: 820, end: 650  })
        .animate('.cloud10',{ delay: 0, duration: 1200, property: 'left', start: 1000, end: 650  });
      }
      else if (width < 979 && width >= 600) {
        addclasstonav();
        
        scrollorama
        .animate('#bigboat', { delay: 0, duration: 800, property: 'left', start: -10, end: 600  })
        .animate('#smallboat', { delay: 0, duration: 700, property: 'left', start: -10, end: 600  });
    
      }
      else if (width < 600) {
        // no move
      }
    }
  };
})(jQuery);