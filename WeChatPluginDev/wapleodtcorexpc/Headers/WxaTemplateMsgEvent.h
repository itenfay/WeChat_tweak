//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface WxaTemplateMsgEvent : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(nonatomic) int appstate; // @dynamic appstate;
@property(nonatomic) int appversion; // @dynamic appversion;
@property(retain, nonatomic) NSString *formid; // @dynamic formid;
@property(retain, nonatomic) NSString *pageid; // @dynamic pageid;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

