//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSData, NSString;

@class WXPBGeneratedMessage;

@interface AffRoamCommonDeviceInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(retain, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property(nonatomic) int deviceType; // @dynamic deviceType;
@property(retain, nonatomic) NSData *specialInfoPb; // @dynamic specialInfoPb;

@end

