//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveAnchorCustomizeRewardResourceUrl, MMFinderLiveAnchorCustomizeRewardStyleItem, NSMutableArray, NSString;

@interface MMFinderLiveAnchorCustomizeRewardItem : NSObject
{
    float _price;
    unsigned int _customModQuota;
    unsigned int _customRemainModetimes;
    unsigned int _customMaxTextLen;
    unsigned int _customFlag;
    NSString *_productId;
    NSString *_rewardName;
    unsigned long long _rewardSpamResult;
    NSString *_rewardSpamMessage;
    NSMutableArray *_switchSkinItemArray;
    MMFinderLiveAnchorCustomizeRewardStyleItem *_currentStyle;
    MMFinderLiveAnchorCustomizeRewardStyleItem *_commitStyle;
    MMFinderLiveAnchorCustomizeRewardResourceUrl *_giftThumbnailUrl;
    MMFinderLiveAnchorCustomizeRewardResourceUrl *_giftAnimationUrl;
    MMFinderLiveAnchorCustomizeRewardResourceUrl *_giftPreviewAnimationUrl;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int customFlag; // @synthesize customFlag=_customFlag;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardResourceUrl *giftPreviewAnimationUrl; // @synthesize giftPreviewAnimationUrl=_giftPreviewAnimationUrl;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardResourceUrl *giftAnimationUrl; // @synthesize giftAnimationUrl=_giftAnimationUrl;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardResourceUrl *giftThumbnailUrl; // @synthesize giftThumbnailUrl=_giftThumbnailUrl;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardStyleItem *commitStyle; // @synthesize commitStyle=_commitStyle;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardStyleItem *currentStyle; // @synthesize currentStyle=_currentStyle;
@property(retain, nonatomic) NSMutableArray *switchSkinItemArray; // @synthesize switchSkinItemArray=_switchSkinItemArray;
@property(copy, nonatomic) NSString *rewardSpamMessage; // @synthesize rewardSpamMessage=_rewardSpamMessage;
@property(nonatomic) unsigned long long rewardSpamResult; // @synthesize rewardSpamResult=_rewardSpamResult;
@property(nonatomic) unsigned int customMaxTextLen; // @synthesize customMaxTextLen=_customMaxTextLen;
@property(nonatomic) unsigned int customRemainModetimes; // @synthesize customRemainModetimes=_customRemainModetimes;
@property(nonatomic) unsigned int customModQuota; // @synthesize customModQuota=_customModQuota;
@property(retain, nonatomic) NSString *rewardName; // @synthesize rewardName=_rewardName;
@property(nonatomic) float price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(readonly, nonatomic) MMFinderLiveAnchorCustomizeRewardResourceUrl *previewAnimationUrl;
@property(readonly, nonatomic) MMFinderLiveAnchorCustomizeRewardResourceUrl *animationUrl;
@property(readonly, nonatomic) MMFinderLiveAnchorCustomizeRewardResourceUrl *thumbnailUrl;
@property(readonly, nonatomic) _Bool isCustomizeImageEnable;
@property(readonly, nonatomic) _Bool isCustomizeTextEnable;
@property(readonly, nonatomic) _Bool isCustomizeColorEnable;
- (void)decreaseRemainModetimes;
- (void)updateStatusOnLocalCommitStyleSuccess;
- (void)initCostomizeRewardProperty:(id)arg1;
- (void)initRewardSpamResultProperty:(id)arg1;
- (void)initCustomConfigProperty:(id)arg1;
- (void)initRewardBaseInfoProperty:(id)arg1;
- (id)initWithFinderLiveGift:(id)arg1;

@end

