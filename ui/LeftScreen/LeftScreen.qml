import QtQuick 2.15

Rectangle {
    id: leftScreen
    anchors {
        top: parent.top
        left: parent.left
        bottom: bottomBar.top
        right: rightScreen.left
    }
    color: "white"

    Image {
        id: carRender
        anchors.centerIn: parent
        width: parent.width * 0.8
        fillMode: Image.PreserveAspectFit
        source: "../assets/carRender.jpg"
    }
}
