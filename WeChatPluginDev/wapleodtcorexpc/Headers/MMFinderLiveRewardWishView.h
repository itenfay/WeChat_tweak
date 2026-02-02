//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveRewardWish, MMUIButton, MMUILabel, NSString, UIImageView;
@protocol MMFinderLiveRewardWishViewDelegate;

@interface MMFinderLiveRewardWishView : UIView
{
    UIView *_contentView;
    UIImageView *_thumbnailView;
    MMUILabel *_displayNameLabel;
    MMUILabel *_priceLabel;
    UIImageView *_coinIconView;
    MMUILabel *_countLabel;
    MMUIButton *_closeButton;
    MMUIButton *_addButton;
    MMUILabel *_fansBadgeLabel;
    id <MMFinderLiveRewardWishViewDelegate> _operationDelegate;
    MMFinderLiveRewardWish *_wishGiftItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveRewardWish *wishGiftItem; // @synthesize wishGiftItem=_wishGiftItem;
@property(nonatomic) __weak id <MMFinderLiveRewardWishViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
@property(retain, nonatomic) MMUILabel *fansBadgeLabel; // @synthesize fansBadgeLabel=_fansBadgeLabel;
@property(retain, nonatomic) MMUIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIImageView *coinIconView; // @synthesize coinIconView=_coinIconView;
@property(retain, nonatomic) MMUILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) MMUILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (void)onClickCloseButton;
- (void)onContentViewTapped;
- (void)onClickAddButton:(id)arg1;
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

