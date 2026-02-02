//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface BizVoiceMsgInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *contentUrl; // @dynamic contentUrl;
@property(nonatomic) unsigned int fileId; // @dynamic fileId;
@property(nonatomic) unsigned int length; // @dynamic length;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *voiceId; // @dynamic voiceId;
@property(nonatomic) unsigned int voiceLength; // @dynamic voiceLength;

@end

