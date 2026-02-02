//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderLvChannelItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long channelId; // @dynamic channelId;
@property(retain, nonatomic) NSString *channelIdStr; // @dynamic channelIdStr;
@property(retain, nonatomic) NSString *channelName; // @dynamic channelName;
@property(nonatomic) unsigned int channelStyle; // @dynamic channelStyle;
@property(nonatomic) unsigned int channelType; // @dynamic channelType;
@property(retain, nonatomic) NSString *fromSessionId; // @dynamic fromSessionId;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(retain, nonatomic) NSString *richTextChannelName; // @dynamic richTextChannelName;

@end

