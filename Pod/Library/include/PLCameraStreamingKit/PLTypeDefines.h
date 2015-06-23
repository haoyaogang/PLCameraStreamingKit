//
//  PLTypeDefines.h
//  PLCameraStreamingKit
//
//  Created on 15/3/26.
//  Copyright (c) 2015年 Pili Engineering. All rights reserved.
//

#ifndef PLCameraStreamingKit_PLTypeDefines_h
#define PLCameraStreamingKit_PLTypeDefines_h

#pragma mark - Authorization

/// 设备授权状态
typedef NS_ENUM(NSUInteger, PLAuthorizationStatus) {
    /// 还没有确定是否授权
    PLAuthorizationStatusNotDetermined = 0,
    /// 设备受限，一般在家长模式下设备会受限
    PLAuthorizationStatusRestricted,
    /// 拒绝授权
    PLAuthorizationStatusDenied,
    /// 已授权
    PLAuthorizationStatusAuthorized
};

#pragma mark - Stream State

/// 流状态
typedef NS_ENUM(NSUInteger, PLStreamState) {
    /// 未知状态，初始化时状态被设定为未知
    PLStreamStateUnknow = 0,
    /// 连接中
    PLStreamStateConnecting,
    /// 已连接
    PLStreamStateConnected,
    /// 已断开
    PLStreamStateDisconnected,
    /// 连接出错
    PLStreamStateError
};

#pragma mark - Video Dimension

/// 流编码分辨率
typedef NS_ENUM(NSUInteger, PLStreamingDimension) {
    /// 16 : 9 横纵比，416 x 234 分辨率
    PLStreamingDimension_16_9__416x234,
    /// 16 : 9 横纵比，480 x 270 分辨率
    PLStreamingDimension_16_9__480x270,
    /// 16 : 9 横纵比，640 x 360 分辨率
    PLStreamingDimension_16_9__640x360,
    /// 16 : 9 横纵比，960 x 540 分辨率
    PLStreamingDimension_16_9__960x540,
    /// 16 : 9 横纵比，1280 x 720 分辨率
    PLStreamingDimension_16_9__1280x720,
    /// 16 : 9 横纵比，1920 x 1080 分辨率
    PLStreamingDimension_16_9__1920x1080,
    /// 4 : 3 横纵比，400 x 300 分辨率
    PLStreamingDimension_4_3__400x300,
    /// 4 : 3 横纵比，480 x 360 分辨率
    PLStreamingDimension_4_3__480x360,
    /// 4 : 3 横纵比，640 x 480 分辨率
    PLStreamingDimension_4_3__640x480,
    /// 4 : 3 横纵比，960 x 720 分辨率
    PLStreamingDimension_4_3__960x720,
    /// 4 : 3 横纵比，1280 x 960 分辨率
    PLStreamingDimension_4_3__1280x960,
    /// 4 : 3 横纵比，1920 x 1140 分辨率
    PLStreamingDimension_4_3__1920x1140,
    /// 自定义分辨率
    PLStreamingDimension_UserDefine,
    /// 默认分辨率，默认为 4 : 3 横纵比，640 x 480 分辨率
    PLStreamingDimension_Default = PLStreamingDimension_4_3__640x480,
};

#pragma mark - Audio BitRate

/// 音频码率
typedef NS_ENUM(NSUInteger, PLStreamingAudioBitRate) {
    /// 64Kbps 音频码率
    PLStreamingAudioBitRate_64Kbps,
    /// 96Kbps 音频码率
    PLStreamingAudioBitRate_96Kbps,
    /// 128Kbps 音频码率
    PLStreamingAudioBitRate_128Kbps,
    /// 默认音频码率，默认为 64Kbps
    PLStreamingAudioBitRate_Default = PLStreamingAudioBitRate_64Kbps
};

#pragma mark - Streaming Quality

/*!
 * @abstract Streaming quality low 1
 *
 * @discussion 具体参数 fps: 12, profile level: baseline30, video bitrate: 200Kbps
 */
extern NSString *kPLStreamingQualityLow1;

/*!
 * @abstract Streaming quality low 2
 *
 * @discussion 具体参数 fps: 15, profile level: baseline30, video bitrate: 400Kbps
 */
extern NSString *kPLStreamingQualityLow2;

/*!
 * @abstract Streaming quality medium 1
 *
 * @discussion 具体参数 fps: 30, profile level: baseline30, video bitrate: 600Kbps
 */
extern NSString *kPLStreamingQualityMedium1;

/*!
 * @abstract Streaming quality medium 2
 *
 * @discussion 具体参数 fps: 30, profile level: baseline31, video bitrate: 1200Kbps
 */
extern NSString *kPLStreamingQualityMedium2;

/*!
 * @abstract Streaming quality medium 3
 *
 * @discussion 具体参数 fps: 30, profile level: main31, video bitrate: 3500Kbps
 */
extern NSString *kPLStreamingQualityMedium3;

/*!
 * @abstract Streaming quality high 1
 *
 * @discussion 具体参数 fps: 30, profile level: main31, video bitrate: 5000Kbps
 */
extern NSString *kPLStreamingQualityHigh1;

/*!
 * @abstract Streaming quality high 2
 *
 * @discussion 具体参数 fps: 30, profile level: main31, video bitrate: 6500Kbps
 */
extern NSString *kPLStreamingQualityHigh2;

/*!
 * @abstract Streaming quality high 3
 *
 * @discussion 具体参数 fps: 30, profile level: high40, video bitrate: 8500Kbps
 */
extern NSString *kPLStreamingQualityHigh3;

#pragma mark - Capture Device Position

/*!
 * @abstract 摄像头位置
 */
typedef NS_ENUM(NSUInteger, PLCaptureDevicePosition) {
    /// 后置摄像头
    PLCaptureDevicePositionBack = 0,
    /// 前置摄像头
    PLCaptureDevicePositionFront
};

#pragma mark - Deprecated

/// @deprecated 创建 Configuration 时请使用 Quality 参数，该参数已失效
typedef NS_ENUM(NSUInteger, PLStreamingNetworkType) {
    /// @deprecated
    PLStreamingNetworkTypeCELL,
    /// @deprecated
    PLStreamingNetworkTypeWiFi,
    /// @deprecated
    PLStreamingNetworkTypeEither
} DEPRECATED_ATTRIBUTE;

#endif
