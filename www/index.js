var gotVersionNumber = function(version) {
	alert(version);
};

function VersionNumbers() {
	cordova.exec(gotVersionNumber, null, "VersionNumber", "getVersionNumber", []);
}