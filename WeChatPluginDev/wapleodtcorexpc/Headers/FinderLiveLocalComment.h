//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface FinderLiveLocalComment : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *appMsgList; // @dynamic appMsgList;
@property(nonatomic) unsigned int curParticipantCount; // @dynamic curParticipantCount;
@property(nonatomic) _Bool enableShowHeat; // @dynamic enableShowHeat;
@property(nonatomic) unsigned long long likeCnt; // @dynamic likeCnt;
@property(nonatomic) unsigned long long liveHeatValue; // @dynamic liveHeatValue;
@property(retain, nonatomic) NSMutableArray *msgList; // @dynamic msgList;
@property(nonatomic) unsigned int onlineCnt; // @dynamic onlineCnt;

@end

