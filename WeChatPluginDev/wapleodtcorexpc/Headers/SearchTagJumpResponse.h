//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, JumpLiteAppInfo, NSString;

@interface SearchTagJumpResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool disablePopups; // @dynamic disablePopups;
@property(nonatomic) unsigned int jumpType; // @dynamic jumpType;
@property(retain, nonatomic) NSString *jumpUrl; // @dynamic jumpUrl;
@property(retain, nonatomic) JumpLiteAppInfo *liteAppInfo; // @dynamic liteAppInfo;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;
@property(nonatomic) unsigned int version; // @dynamic version;
@property(nonatomic) unsigned int versionType; // @dynamic versionType;
@property(retain, nonatomic) NSString *weappUrl; // @dynamic weappUrl;
@property(retain, nonatomic) NSString *webviewJson; // @dynamic webviewJson;

@end

