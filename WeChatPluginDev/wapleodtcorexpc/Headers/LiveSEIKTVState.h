//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface LiveSEIKTVState : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool disableScoreAdjust; // @dynamic disableScoreAdjust;
@property(nonatomic) _Bool interrupt; // @dynamic interrupt;
@property(retain, nonatomic) NSString *nextSongName; // @dynamic nextSongName;
@property(nonatomic) _Bool pause; // @dynamic pause;
@property(nonatomic) int realTimeScore; // @dynamic realTimeScore;
@property(retain, nonatomic) NSString *scoreLevel; // @dynamic scoreLevel;
@property(nonatomic) int sentenceIndex; // @dynamic sentenceIndex;
@property(nonatomic) int singState; // @dynamic singState;
@property(retain, nonatomic) NSString *singerUserId; // @dynamic singerUserId;
@property(retain, nonatomic) NSString *songId; // @dynamic songId;
@property(retain, nonatomic) NSString *songName; // @dynamic songName;
@property(nonatomic) int totalScore; // @dynamic totalScore;
@property(retain, nonatomic) NSString *uniqueId; // @dynamic uniqueId;
@property(nonatomic) int us; // @dynamic us;
@property(nonatomic) _Bool useVideo; // @dynamic useVideo;

@end

