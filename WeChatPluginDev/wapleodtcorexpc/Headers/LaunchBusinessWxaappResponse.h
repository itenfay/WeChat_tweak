//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, WxaLiteAppInfo;

@interface LaunchBusinessWxaappResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int cacheDuration; // @dynamic cacheDuration;
@property(nonatomic) _Bool canUseTransparentBackground; // @dynamic canUseTransparentBackground;
@property(retain, nonatomic) WxaLiteAppInfo *liteAppInfo; // @dynamic liteAppInfo;
@property(nonatomic) _Bool needCache; // @dynamic needCache;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(retain, nonatomic) NSString *pathAndQuery; // @dynamic pathAndQuery;

@end

