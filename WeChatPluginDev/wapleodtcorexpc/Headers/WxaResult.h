//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface WxaResult : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(nonatomic) unsigned int appVersion; // @dynamic appVersion;
@property(nonatomic) unsigned int dau; // @dynamic dau;
@property(retain, nonatomic) NSData *debugBuf; // @dynamic debugBuf;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(retain, nonatomic) NSString *docId; // @dynamic docId;
@property(retain, nonatomic) NSString *extraJson; // @dynamic extraJson;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(nonatomic) float scoreQuailty; // @dynamic scoreQuailty;
@property(nonatomic) float scoreTfIdf; // @dynamic scoreTfIdf;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

