//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveRewardWish, MMUIButton, MMUILabel, NSString, UIImageView;
@protocol MMFinderLiveRewardWishSendingViewDelegate;

@interface MMFinderLiveRewardWishSendingView : UIView
{
    UIView *_contentView;
    UIView *_voiceOverContentView;
    UIImageView *_thumbnailView;
    MMUILabel *_displayNameLabel;
    MMUILabel *_priceLabel;
    UIImageView *_coinIconView;
    MMUILabel *_countLabel;
    MMUILabel *_fansBadgeLabel;
    MMUIButton *_sendButton;
    MMUILabel *_giftDisableLabel;
    MMFinderLiveRewardWish *_wishGiftItem;
    id <MMFinderLiveRewardWishSendingViewDelegate> _operationDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFinderLiveRewardWishSendingViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
@property(retain, nonatomic) MMFinderLiveRewardWish *wishGiftItem; // @synthesize wishGiftItem=_wishGiftItem;
@property(retain, nonatomic) MMUILabel *giftDisableLabel; // @synthesize giftDisableLabel=_giftDisableLabel;
@property(retain, nonatomic) MMUIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) MMUILabel *fansBadgeLabel; // @synthesize fansBadgeLabel=_fansBadgeLabel;
@property(retain, nonatomic) MMUILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIImageView *coinIconView; // @synthesize coinIconView=_coinIconView;
@property(retain, nonatomic) MMUILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) MMUILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UIView *voiceOverContentView; // @synthesize voiceOverContentView=_voiceOverContentView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (void)onClickSendButton:(id)arg1;
- (void)layoutSubviews;
- (void)initUI;
- (id)getDefaultGiftThumbImage;
- (void)clearCurrentWishGiftItem;
- (void)setupSelfAccessibilityWith:(id)arg1;
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

