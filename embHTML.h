/**The MIT License (MIT)
Copyright (c) 2019 by Radim Keseg
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

const char PAGE_INDEX[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<title>NeoPixel XmasTree</title>

<script>
  window.onload = function(){}
</script>
 
<style>
.color-box{
    width: 32px;
    height: 20px;
    display: inline-block;
    border: 1px solid #000;
    margin-bottom: -7px;
}
.color-box-error{
    border: 1px solid #f00;
}
</style>

<body>
<h1>NeoPixel xMasTree</h1>
<p>
Neopixel XmasTree with an ESP8266 IoT device
<p/>

<form method='post' action='offset'>
<label>UTC TimeOffset<br><input id='_timeoffset' name='_timeoffset' length=5 pattern='^[0-9-\\.]{1,5}$' required value='{timeoffset}'></label><br>
<label>DST<br><input id='_dst' name='_dst' type='checkbox' {dst}></label><br>
<br/>
<label>Brightness by daylight<br><input id='_brightness' name='_brightness' length=3 pattern='^[0-9]{3,0}$' value='{brightness}'></label><br>
<br/>
<input type='submit' value='Store'></form>


</body>
</html>
)=====";
