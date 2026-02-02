//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface RecommendedMusicFeedback : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int behaviorTimestamp; // @dynamic behaviorTimestamp;
@property(nonatomic) unsigned int behaviorType; // @dynamic behaviorType;
@property(nonatomic) unsigned int behaviorValue; // @dynamic behaviorValue;
@property(nonatomic) unsigned int index; // @dynamic index;
@property(nonatomic) unsigned int musidSid; // @dynamic musidSid;
@property(retain, nonatomic) NSString *query; // @dynamic query;
@property(nonatomic) unsigned long long searchReqId; // @dynamic searchReqId;

@end

