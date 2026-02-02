//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMIotDeviceExtInfo, NSMutableArray, NSString;

@interface MMIotDeviceInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(nonatomic) unsigned int deviceType; // @dynamic deviceType;
@property(retain, nonatomic) MMIotDeviceExtInfo *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
@property(retain, nonatomic) NSMutableArray *supportMsgtypeList; // @dynamic supportMsgtypeList;

@end

