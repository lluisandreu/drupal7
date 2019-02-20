'use strict';
var gulp = require('gulp');

var sass = require('gulp-sass');

gulp.task('sass', function(){
  return gulp.src('scss/ths.scss')
    .pipe(sass()) // Using gulp-sass
    .pipe(gulp.dest('css'))
});