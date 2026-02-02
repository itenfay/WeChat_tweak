//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveRewardGiftItem, NSString;

@interface MMFinderLiveRecommendUserSendGiftInfo : NSObject
{
    unsigned long long _seq;
    MMFinderLiveRewardGiftItem *_giftItem;
    NSString *_wording;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
- (id)description;
- (void)copyFromRecommendUserSendGiftInfoResp:(id)arg1;
- (id)initWithRecommendUserSendGiftInfoResp:(id)arg1;

@end

