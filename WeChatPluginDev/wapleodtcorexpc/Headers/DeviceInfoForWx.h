//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMIotDeviceExtInfo, NSMutableArray, NSString;

@interface DeviceInfoForWx : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *deviceIconUrl; // @dynamic deviceIconUrl;
@property(retain, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(retain, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property(nonatomic) unsigned int deviceType; // @dynamic deviceType;
@property(retain, nonatomic) MMIotDeviceExtInfo *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) NSMutableArray *msgTypeList; // @dynamic msgTypeList;

@end

