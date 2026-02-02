//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray, NSString;

@interface MusicPostTipsDetail : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *coverUrl; // @dynamic coverUrl;
@property(nonatomic) unsigned int durationSec; // @dynamic durationSec;
@property(nonatomic) unsigned long long feedId; // @dynamic feedId;
@property(retain, nonatomic) NSMutableArray *singers; // @dynamic singers;
@property(retain, nonatomic) NSString *songName; // @dynamic songName;
@property(retain, nonatomic) NSString *streamUrl; // @dynamic streamUrl;
@property(nonatomic) unsigned long long tingSongId; // @dynamic tingSongId;
@property(nonatomic) unsigned long long topicId; // @dynamic topicId;
@property(retain, nonatomic) NSData *topicInfoPassbuff; // @dynamic topicInfoPassbuff;

@end

