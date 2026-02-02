//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AndroidDeviceInfo, BaseRequest, IosDeviceInfo, NSString;

@interface ReportInactiveUserRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AndroidDeviceInfo *androidDeviceInfo; // @dynamic androidDeviceInfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *country; // @dynamic country;
@property(retain, nonatomic) IosDeviceInfo *iosDeviceInfo; // @dynamic iosDeviceInfo;
@property(retain, nonatomic) NSString *lang; // @dynamic lang;

@end

