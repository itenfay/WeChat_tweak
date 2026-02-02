//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveRewardGiftItem;

@interface MMFinderLiveRewardWish : NSObject
{
    MMFinderLiveRewardGiftItem *_giftItem;
    unsigned long long _targetCount;
    unsigned long long _currentCount;
}

+ (id)createInstanceFromLiveRewardWishItem:(id)arg1;
+ (id)createInstanceFromLiveRewardWish:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long currentCount; // @synthesize currentCount=_currentCount;
@property(nonatomic) unsigned long long targetCount; // @synthesize targetCount=_targetCount;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
- (id)description;
- (id)toLiveRewardWish;

@end

