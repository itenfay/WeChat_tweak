//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveRewardAppMsgInfo, MMFinderLiveRewardGiftItem;

@interface MMFinderLiveRewardGiftExtraInfo : NSObject
{
    _Bool _ignoreMultiAnimation;
    _Bool _ignoreCustomize;
    _Bool _customizeRelyOnSelect;
    _Bool _isLandscapeStyle;
    _Bool _ignoreTextNewCustomize;
    MMFinderLiveRewardAppMsgInfo *_rewardAppMsg;
    MMFinderLiveRewardGiftItem *_customizePriorRewardItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool ignoreTextNewCustomize; // @synthesize ignoreTextNewCustomize=_ignoreTextNewCustomize;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *customizePriorRewardItem; // @synthesize customizePriorRewardItem=_customizePriorRewardItem;
@property(retain, nonatomic) MMFinderLiveRewardAppMsgInfo *rewardAppMsg; // @synthesize rewardAppMsg=_rewardAppMsg;
@property(nonatomic) _Bool isLandscapeStyle; // @synthesize isLandscapeStyle=_isLandscapeStyle;
@property(nonatomic) _Bool customizeRelyOnSelect; // @synthesize customizeRelyOnSelect=_customizeRelyOnSelect;
@property(nonatomic) _Bool ignoreCustomize; // @synthesize ignoreCustomize=_ignoreCustomize;
@property(nonatomic) _Bool ignoreMultiAnimation; // @synthesize ignoreMultiAnimation=_ignoreMultiAnimation;
- (id)description;
- (void)printDesc;
- (void)initDefaultData;
- (id)init;

@end

