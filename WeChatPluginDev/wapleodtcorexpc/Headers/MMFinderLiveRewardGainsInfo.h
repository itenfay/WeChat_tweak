//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveContact, WCFinderContact;

@interface MMFinderLiveRewardGainsInfo : NSObject
{
    unsigned int _rewardTotalAmountInWecoin;
    FinderLiveContact *_liveContact;
    WCFinderContact *_refContact;
    unsigned long long _rewardTime;
}

+ (id)tranferToLiveRewardGainsInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long rewardTime; // @synthesize rewardTime=_rewardTime;
@property(nonatomic) unsigned int rewardTotalAmountInWecoin; // @synthesize rewardTotalAmountInWecoin=_rewardTotalAmountInWecoin;
@property(retain, nonatomic) WCFinderContact *refContact; // @synthesize refContact=_refContact;
@property(retain, nonatomic) FinderLiveContact *liveContact; // @synthesize liveContact=_liveContact;
- (id)description;
- (void)copyFromPBRewardGainsInfo:(id)arg1;
- (id)initWithPBRewardGainsInfo:(id)arg1;

@end

