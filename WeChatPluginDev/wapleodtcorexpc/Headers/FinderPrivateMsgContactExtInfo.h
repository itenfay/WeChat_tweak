//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderPrivateMsgContactExtInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *badgeInfos; // @dynamic badgeInfos;
@property(nonatomic) unsigned int followFlag; // @dynamic followFlag;
@property(nonatomic) unsigned long long interactionCount; // @dynamic interactionCount;
@property(nonatomic) _Bool isMyMember; // @dynamic isMyMember;
@property(nonatomic) unsigned long long rewardAmount; // @dynamic rewardAmount;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

