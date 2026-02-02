//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreItem, MMEmoticonStoreDownloadLogic, MMWebImageView, NSString, UILabel;

@interface EmotionPurchasedCell
{
    EmoticonStoreItem *_item;
    MMEmoticonStoreDownloadLogic *_downloadLogic;
    MMWebImageView *_webImageView;
    UILabel *_nameLabel;
    UILabel *_priceLabel;
    UILabel *_timeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *webImageView; // @synthesize webImageView=_webImageView;
@property(retain, nonatomic) MMEmoticonStoreDownloadLogic *downloadLogic; // @synthesize downloadLogic=_downloadLogic;
@property(retain, nonatomic) EmoticonStoreItem *item; // @synthesize item=_item;
- (double)downloadViewMaxWidth;
- (void)onStoreDownloadLogicDisplayViewChanged;
- (void)onDownloadFinished;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)arg1;
- (void)initDownloadLogic;
- (void)makeTimeLabel:(id)arg1;
- (void)makePriceLabelWith:(id)arg1;
- (void)makePackNameLabelWithItem:(id)arg1;
- (void)makeImageViewWithItem:(id)arg1;
- (void)createOrUpdateLayout;
- (void)layoutSubviews;
- (void)configureCellWithItem:(id)arg1 andLabelMaxWidth:(double)arg2;
- (void)setEmotionStoreItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

