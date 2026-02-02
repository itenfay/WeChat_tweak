//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DeviceCamera;

@interface DeviceVideoParam : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) DeviceCamera *backCamera; // @dynamic backCamera;
@property(nonatomic) unsigned int cameraNum; // @dynamic cameraNum;
@property(nonatomic) unsigned int focusType; // @dynamic focusType;
@property(nonatomic) unsigned int fpsMax; // @dynamic fpsMax;
@property(nonatomic) unsigned int fpsMin; // @dynamic fpsMin;
@property(retain, nonatomic) DeviceCamera *frontCamera; // @dynamic frontCamera;
@property(nonatomic) unsigned int supportHwenc; // @dynamic supportHwenc;

@end

