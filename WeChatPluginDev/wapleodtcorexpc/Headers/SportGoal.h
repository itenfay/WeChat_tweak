//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface SportGoal : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)description;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(nonatomic) double current; // @dynamic current;
@property(nonatomic) double goal; // @dynamic goal;
@property(nonatomic) unsigned int showIndex; // @dynamic showIndex;
@property(nonatomic) unsigned int showType; // @dynamic showType;
@property(retain, nonatomic) NSString *sportGoalName; // @dynamic sportGoalName;
@property(nonatomic) unsigned int sportGoalTypeId; // @dynamic sportGoalTypeId;
@property(retain, nonatomic) NSString *sportGoalUnit; // @dynamic sportGoalUnit;
@property(nonatomic) unsigned int timestamp; // @dynamic timestamp;

@end

