//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class LabelInfo, NSString;

@interface HVAppInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appIcon; // @dynamic appIcon;
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) NSString *appName; // @dynamic appName;
@property(retain, nonatomic) NSString *jumpUrl; // @dynamic jumpUrl;
@property(retain, nonatomic) LabelInfo *labelInfo; // @dynamic labelInfo;
@property(retain, nonatomic) NSString *launchUrl; // @dynamic launchUrl;

@end

