//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCFinderContact;

@interface MMFinderLiveLotteryRecord : NSObject
{
    unsigned int _liveStartTime;
    int _retCode;
    unsigned int _supportMultiType;
    NSArray *_lotteryList;
    NSArray *_milestoneLotteryList;
    unsigned long long _liveId;
    unsigned long long _objectId;
    NSString *_objectNonceId;
    WCFinderContact *_anchorContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *anchorContact; // @synthesize anchorContact=_anchorContact;
@property(nonatomic) unsigned int supportMultiType; // @synthesize supportMultiType=_supportMultiType;
@property(nonatomic) int retCode; // @synthesize retCode=_retCode;
@property(retain, nonatomic) NSString *objectNonceId; // @synthesize objectNonceId=_objectNonceId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) NSArray *milestoneLotteryList; // @synthesize milestoneLotteryList=_milestoneLotteryList;
@property(retain, nonatomic) NSArray *lotteryList; // @synthesize lotteryList=_lotteryList;
@property(nonatomic) unsigned int liveStartTime; // @synthesize liveStartTime=_liveStartTime;
- (id)description;
- (id)initWithLotteryRecord:(id)arg1;

@end

