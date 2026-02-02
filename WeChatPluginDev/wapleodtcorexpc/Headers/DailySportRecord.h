//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, rankDesc;

@interface DailySportRecord : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool isLike; // @dynamic isLike;
@property(retain, nonatomic) NSMutableArray *likeList; // @dynamic likeList;
@property(nonatomic) unsigned int likecount; // @dynamic likecount;
@property(retain, nonatomic) rankDesc *rankdesc; // @dynamic rankdesc;
@property(retain, nonatomic) NSMutableArray *sportGoal; // @dynamic sportGoal;
@property(retain, nonatomic) NSMutableArray *sportrecord; // @dynamic sportrecord;
@property(nonatomic) unsigned int timestamp; // @dynamic timestamp;

@end

