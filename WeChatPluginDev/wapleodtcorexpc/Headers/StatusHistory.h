//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface StatusHistory : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int commentCount; // @dynamic commentCount;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *extInfo; // @dynamic extInfo;
@property(nonatomic) unsigned long long key; // @dynamic key;
@property(nonatomic) int likedCount; // @dynamic likedCount;
@property(retain, nonatomic) NSString *privateInfo; // @dynamic privateInfo;
@property(nonatomic) int referencedCount; // @dynamic referencedCount;
@property(retain, nonatomic) NSString *statusId; // @dynamic statusId;
@property(retain, nonatomic) NSString *topicId; // @dynamic topicId;

@end

