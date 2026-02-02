//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray, NSString;

@interface FinderTipsShowEntranceExtInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int displayTabType; // @dynamic displayTabType;
@property(nonatomic) unsigned int finderSubRecallType; // @dynamic finderSubRecallType;
@property(nonatomic) unsigned int friendLikeCount; // @dynamic friendLikeCount;
@property(nonatomic) unsigned int liveSubRecallType; // @dynamic liveSubRecallType;
@property(retain, nonatomic) NSMutableArray *multiUsernames; // @dynamic multiUsernames;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) unsigned int objectType; // @dynamic objectType;
@property(retain, nonatomic) NSString *reportExtInfo; // @dynamic reportExtInfo;
@property(retain, nonatomic) NSData *tabTipsByPassInfo; // @dynamic tabTipsByPassInfo;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

