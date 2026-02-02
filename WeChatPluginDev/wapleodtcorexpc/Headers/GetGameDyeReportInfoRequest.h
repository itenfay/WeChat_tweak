//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetGameDyeReportInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appStoreUrl; // @dynamic appStoreUrl;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *extraJsonData; // @dynamic extraJsonData;
@property(nonatomic) _Bool isCancel; // @dynamic isCancel;
@property(nonatomic) _Bool isLaunchApp; // @dynamic isLaunchApp;
@property(retain, nonatomic) NSString *wxagAppid; // @dynamic wxagAppid;

@end

