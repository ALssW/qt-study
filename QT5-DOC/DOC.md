# 高DPI

在高 DPI 屏幕中 QT 会自动缩放坐标，导致控件大小与坐标与实际像素值不一致。

使用 **`QApplication::setAttribute(Qt::AA_EnableHighDpiScaling)`** 来确保像素值一致