//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderContact, NSData, NSMutableArray, NSString;

@interface FinderLotteryLiveRecordList_FinderLiveLotteryRecord : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderContact *anthorContact; // @dynamic anthorContact;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(retain, nonatomic) NSMutableArray *info; // @dynamic info;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(nonatomic) unsigned int liveStartTime; // @dynamic liveStartTime;
@property(retain, nonatomic) NSMutableArray *lotteryInfo; // @dynamic lotteryInfo;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) int retCode; // @dynamic retCode;
@property(nonatomic) unsigned int supportMultiType; // @dynamic supportMultiType;

@end

