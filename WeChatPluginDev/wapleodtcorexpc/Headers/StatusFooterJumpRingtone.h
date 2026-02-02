//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class StatusFooterJumpFinderFeed, StatusFooterJumpMusic;

@interface StatusFooterJumpRingtone : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) StatusFooterJumpFinderFeed *finder; // @dynamic finder;
@property(retain, nonatomic) StatusFooterJumpMusic *music; // @dynamic music;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

