//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMFinderLiveRewardGiftItem, MMFinderLiveTask, MMUILabel, MMUIView, NSString, UIImage, UIImageView, UILongPressGestureRecognizer;
@protocol MMLiveRewardGiftCollectionViewCellDelegate;

@interface MMLiveRewardGiftCollectionViewCell : UICollectionViewCell
{
    _Bool _disableGiftCountLabel;
    _Bool _isPrepared;
    id <MMLiveRewardGiftCollectionViewCellDelegate> _delegate;
    CDUnknownBlockType _longPressedCallback;
    MMFinderLiveRewardGiftItem *_giftItem;
    UIImageView *_thumbnailView;
    UIImage *_thumbnailImg;
    MMUILabel *_displayNameLabel;
    MMUILabel *_priceLabel;
    UIImageView *_coinIconView;
    MMUILabel *_giftCountLabel;
    MMUIView *_expireDaysContainerView;
    MMUILabel *_expireDaysLabel;
    MMUIView *_tagView;
    MMUIView *_tagBgView;
    UIImageView *_tagIconView;
    MMUILabel *_tagLabel;
    UILongPressGestureRecognizer *_sendButtonLongPressGesture;
    unsigned long long _mode;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) UILongPressGestureRecognizer *sendButtonLongPressGesture; // @synthesize sendButtonLongPressGesture=_sendButtonLongPressGesture;
@property(retain, nonatomic) MMUILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UIImageView *tagIconView; // @synthesize tagIconView=_tagIconView;
@property(retain, nonatomic) MMUIView *tagBgView; // @synthesize tagBgView=_tagBgView;
@property(retain, nonatomic) MMUIView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) MMUILabel *expireDaysLabel; // @synthesize expireDaysLabel=_expireDaysLabel;
@property(retain, nonatomic) MMUIView *expireDaysContainerView; // @synthesize expireDaysContainerView=_expireDaysContainerView;
@property(retain, nonatomic) MMUILabel *giftCountLabel; // @synthesize giftCountLabel=_giftCountLabel;
@property(retain, nonatomic) UIImageView *coinIconView; // @synthesize coinIconView=_coinIconView;
@property(retain, nonatomic) MMUILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) MMUILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) UIImage *thumbnailImg; // @synthesize thumbnailImg=_thumbnailImg;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(nonatomic) _Bool isPrepared; // @synthesize isPrepared=_isPrepared;
@property(nonatomic) _Bool disableGiftCountLabel; // @synthesize disableGiftCountLabel=_disableGiftCountLabel;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem; // @synthesize giftItem=_giftItem;
@property(copy, nonatomic) CDUnknownBlockType longPressedCallback; // @synthesize longPressedCallback=_longPressedCallback;
@property(nonatomic) __weak id <MMLiveRewardGiftCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isAccessibilityElement;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (void)onLongpressSendButton:(id)arg1;
- (void)updateThumbnailImage;
- (void)updateUIForPrepareStateChange;
- (void)updateIsPrepared:(_Bool)arg1;
- (_Bool)checkNewCustomizationModelPrepared:(id)arg1;
- (void)checkIsPrepared;
- (unsigned int)getSelfGlobalLevel;
- (unsigned int)getSelfIntimacyLevel;
- (_Bool)isGiftNewCustomizeStyle;
- (_Bool)isJoinFansGroupEntranceGift:(id)arg1;
- (_Bool)isSuperfanGift:(id)arg1;
- (_Bool)isJoinFansGroupGift:(id)arg1;
- (_Bool)isFansGroupGift:(id)arg1;
- (_Bool)isInFansGroup;
- (id)getGiftTagFontColor:(id)arg1;
- (id)getGiftTagBg1Color:(id)arg1;
- (id)getGiftTagBg0Color:(id)arg1;
- (id)getGiftTag:(id)arg1;
- (id)getGiftTagIcon:(id)arg1;
- (id)getGiftDisplayName:(id)arg1;
- (_Bool)needShowActivityTag;
- (void)onMagicRewardResourceStateChanged:(unsigned long long)arg1 resource:(id)arg2;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (void)updateMagicRewardResourceExtRegister;
- (void)layoutSubviews;
- (void)initUI;
- (id)getDefaultGiftThumbImage;
- (void)preLoadNewCustomizationMagicResIfNeed;
- (void)updateWithGiftItem:(id)arg1 mode:(unsigned long long)arg2;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

