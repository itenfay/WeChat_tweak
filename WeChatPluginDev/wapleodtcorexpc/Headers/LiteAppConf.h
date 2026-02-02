//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface LiteAppConf : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(nonatomic) unsigned int expireDuration; // @dynamic expireDuration;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(nonatomic) unsigned int refreshDuration; // @dynamic refreshDuration;
@property(retain, nonatomic) NSString *wepkgId; // @dynamic wepkgId;

@end

