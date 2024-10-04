import QtQuick 2.15

Rectangle {
    id: rightScreen
    anchors {
        top: parent.top
        right: parent.right
        bottom: bottomBar.top
    }
    color: "orange"
    width: parent.width * 2/3
}
