//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderLiveVotingInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *choiceList; // @dynamic choiceList;
@property(nonatomic) unsigned int disableResult; // @dynamic disableResult;
@property(nonatomic) unsigned int duration; // @dynamic duration;
@property(nonatomic) unsigned int participateCount; // @dynamic participateCount;
@property(retain, nonatomic) NSString *question; // @dynamic question;
@property(nonatomic) unsigned int remainTime; // @dynamic remainTime;
@property(nonatomic) unsigned int showRemainTime; // @dynamic showRemainTime;
@property(retain, nonatomic) NSString *sourceRoomName; // @dynamic sourceRoomName;
@property(nonatomic) unsigned int startTime; // @dynamic startTime;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(nonatomic) unsigned long long version; // @dynamic version;
@property(retain, nonatomic) NSString *votingId; // @dynamic votingId;

@end

