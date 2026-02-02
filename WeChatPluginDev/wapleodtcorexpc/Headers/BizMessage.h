//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BizAppMsgInfo, BizImageMsgInfo, BizTextMsgInfo, BizVideoMsgInfo, BizVoiceMsgInfo, CommMsgBaseInfo;

@interface BizMessage : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BizAppMsgInfo *appMsg; // @dynamic appMsg;
@property(retain, nonatomic) CommMsgBaseInfo *baseInfo; // @dynamic baseInfo;
@property(nonatomic) _Bool featuredExposed; // @dynamic featuredExposed;
@property(retain, nonatomic) BizImageMsgInfo *image; // @dynamic image;
@property(retain, nonatomic) BizTextMsgInfo *text; // @dynamic text;
@property(retain, nonatomic) BizVideoMsgInfo *video; // @dynamic video;
@property(retain, nonatomic) BizVoiceMsgInfo *voice; // @dynamic voice;

@end

