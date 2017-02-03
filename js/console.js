			$(function() {
   		 		var form1 = $('#ques1');
          var form2 = $('#ques2');
          var form3 = $('#ques3');
          var form4 = $('#ques4');
          var form5 = $('#ques5');
          var form6 = $('#ques6');
   		 		var form7 = $('#ques7');
   		 		var form8 = $('#ques8');
   		 		var form9 = $('#ques9');
   		 		var form10 = $('#ques10');
          $(form1).submit(function(event) {
            event.preventDefault();

            var formData = $(form1).serialize();
            $.ajax({
              type: 'POST',
              url: $(form1).attr('action'),
              data: formData
          })
            .done(function(response) {
              $('#output').text(response);
          });
          });
            $(form2).submit(function(event) {
            event.preventDefault();

            var formData = $(form2).serialize();
            $.ajax({
              type: 'POST',
              url: $(form2).attr('action'),
              data: formData
          })
            .done(function(response) {
              $('#output').text(response);
          });
            });
   		 		$(form3).submit(function(event) {
   		 			event.preventDefault();

   					var formData = $(form3).serialize();
    				$.ajax({
    					type: 'POST',
    					url: $(form3).attr('action'),
    					data: formData
					})
    				.done(function(response) {
    					$('#output').text(response);
					});
				});
          $(form4).submit(function(event) {
            event.preventDefault();

            var formData = $(form4).serialize();
            $.ajax({
              type: 'POST',
              url: $(form4).attr('action'),
              data: formData
          })
            .done(function(response) {
              $('#output').text(response);
          });
            });
            $(form5).submit(function(event) {
            event.preventDefault();

            var formData = $(form5).serialize();
            $.ajax({
              type: 'POST',
              url: $(form5).attr('action'),
              data: formData
          })
            .done(function(response) {
              $('#output').text(response);
          });
            });
          $(form6).submit(function(event) {
            event.preventDefault();

            var formData = $(form6).serialize();
            $.ajax({
              type: 'POST',
              url: $(form6).attr('action'),
              data: formData
          })
            .done(function(response) {
              $('#output').text(response);
          });
            });
				$(form7).submit(function(event) {
   		 			event.preventDefault();

   					var formData = $(form7).serialize();
    				$.ajax({
    					type: 'POST',
    					url: $(form7).attr('action'),
    					data: formData
					})
    				.done(function(response) {
    					$('#output').text(response);
					});
				});
				$(form8).submit(function(event) {
   		 			event.preventDefault();

   					var formData = $(form8).serialize();
    				$.ajax({
    					type: 'POST',
    					url: $(form8).attr('action'),
    					data: formData
					})
    				.done(function(response) {
    					$('#output').text(response);
					});
				});
				$(form9).submit(function(event) {
   		 			event.preventDefault();

   					var formData = $(form9).serialize();
    				$.ajax({
    					type: 'POST',
    					url: $(form9).attr('action'),
    					data: formData
					})
    				.done(function(response) {
    					$('#output').text(response);
					});
				});
				$(form10).submit(function(event) {
   		 			event.preventDefault();

   					var formData = $(form10).serialize();
    				$.ajax({
    					type: 'POST',
    					url: $(form10).attr('action'),
    					data: formData
					})
    				.done(function(response) {
    					$('#output').text(response);
					});
				});
    		});
