const char* id="teacher-01";

out(led, ONBOARDLED).inverted().off();
button(home, BUTTON_HOME, "pressed", "released").inverted().debounce(10);
button(buttom, BUTTON_RIGHT, "pressed", "released").inverted().debounce(10);
m5stickc_display(console, 2, 270); // why does lcd as name turn into Lcd?
m5stickc_imu(imu, true, true, false, false);

void start() {
	do_later(100, [] () {
		IN(console).println("This is stick: ")
			.println(id);
	});
}
