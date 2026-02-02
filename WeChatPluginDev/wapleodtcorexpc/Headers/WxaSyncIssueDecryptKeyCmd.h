//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, WxaSyncBaseCmd;

@interface WxaSyncIssueDecryptKeyCmd : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int appVersion; // @dynamic appVersion;
@property(retain, nonatomic) WxaSyncBaseCmd *base; // @dynamic base;
@property(retain, nonatomic) NSString *decryptKey; // @dynamic decryptKey;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;

@end

