//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray, NSString;

@interface FinderLiveLotteryClaimMethod : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int buttonStatus; // @dynamic buttonStatus;
@property(retain, nonatomic) NSString *buttonWording; // @dynamic buttonWording;
@property(retain, nonatomic) NSMutableArray *claimInfo; // @dynamic claimInfo;
@property(nonatomic) unsigned int claimType; // @dynamic claimType;
@property(retain, nonatomic) NSString *expiredWording; // @dynamic expiredWording;
@property(nonatomic) unsigned int isExpired; // @dynamic isExpired;
@property(retain, nonatomic) NSData *orderJumpInfo; // @dynamic orderJumpInfo;
@property(nonatomic) unsigned int orderStatus; // @dynamic orderStatus;
@property(retain, nonatomic) NSString *remindWording; // @dynamic remindWording;

@end

