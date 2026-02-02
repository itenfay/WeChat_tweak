//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveRecentRewardGiftItem, MMUILabel, UIImageView;

@interface MMFinderLiveRecentRewardGiftItemView : UIView
{
    _Bool _isIdle;
    UIImageView *_giftImageView;
    MMUILabel *_giftCountLabel;
    MMFinderLiveRecentRewardGiftItem *_giftItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveRecentRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(retain, nonatomic) MMUILabel *giftCountLabel; // @synthesize giftCountLabel=_giftCountLabel;
@property(retain, nonatomic) UIImageView *giftImageView; // @synthesize giftImageView=_giftImageView;
@property(nonatomic) _Bool isIdle; // @synthesize isIdle=_isIdle;
- (id)liveTask;
- (void)updateItem:(id)arg1;
- (id)getDefaultGiftThumbImage;
- (void)updateCountLabel;
- (void)updateGiftImage;
- (void)layoutSubviews;
- (void)setNotIdleWithFrame:(struct CGRect)arg1;
- (void)initMoreLabel;
- (id)initLastOneWithFrame:(struct CGRect)arg1 GiftItem:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 GiftItem:(id)arg2;

@end

