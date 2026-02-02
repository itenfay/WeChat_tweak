//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface WARemoteDebug_DeviceInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(retain, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property(nonatomic) float pixelRatio; // @dynamic pixelRatio;
@property(nonatomic) unsigned int publibVersion; // @dynamic publibVersion;
@property(nonatomic) float screenWidth; // @dynamic screenWidth;
@property(retain, nonatomic) NSString *systemVersion; // @dynamic systemVersion;
@property(retain, nonatomic) NSString *userAgent; // @dynamic userAgent;
@property(retain, nonatomic) NSString *wechatVersion; // @dynamic wechatVersion;

@end

