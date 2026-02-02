//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveRewardWish, MMUILabel, NSString, UIImageView;

@interface MMFinderLiveRewardWishProgressView : UIView
{
    UIView *_contentView;
    UIImageView *_thumbnailView;
    MMUILabel *_displayNameLabel;
    MMUILabel *_countLabel;
    MMUILabel *_fansBadgeLabel;
    MMUILabel *_giftDisableLabel;
    MMFinderLiveRewardWish *_wishGiftItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveRewardWish *wishGiftItem; // @synthesize wishGiftItem=_wishGiftItem;
@property(retain, nonatomic) MMUILabel *giftDisableLabel; // @synthesize giftDisableLabel=_giftDisableLabel;
@property(retain, nonatomic) MMUILabel *fansBadgeLabel; // @synthesize fansBadgeLabel=_fansBadgeLabel;
@property(retain, nonatomic) MMUILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) MMUILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (void)layoutSubviews;
- (void)initUI;
- (id)getDefaultGiftThumbImage;
- (void)clearCurrentWishGiftItem;
- (void)updateWithWishGiftItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

