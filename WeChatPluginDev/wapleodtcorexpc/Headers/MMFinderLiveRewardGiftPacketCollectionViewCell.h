//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMFinderLiveGiftPacketViewModel, MMFinderLiveTask, MMUILabel, NSString, UIImageView;
@protocol MMFinderLiveRewardGiftPacketCollectionViewCellDelegate;

@interface MMFinderLiveRewardGiftPacketCollectionViewCell : UICollectionViewCell
{
    id <MMFinderLiveRewardGiftPacketCollectionViewCellDelegate> _delegate;
    UIImageView *_thumbnailView;
    MMUILabel *_displayNameLabel;
    MMUILabel *_priceLabel;
    UIImageView *_coinIconView;
    MMUILabel *_giftCountLabel;
    MMUILabel *_badgeLabel;
    MMFinderLiveGiftPacketViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveGiftPacketViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MMUILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(retain, nonatomic) MMUILabel *giftCountLabel; // @synthesize giftCountLabel=_giftCountLabel;
@property(retain, nonatomic) UIImageView *coinIconView; // @synthesize coinIconView=_coinIconView;
@property(retain, nonatomic) MMUILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) MMUILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(nonatomic) __weak id <MMFinderLiveRewardGiftPacketCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (id)getGiftDescriptionFont:(id)arg1;
- (id)getGiftDiscription:(id)arg1;
- (id)getGiftIconImage:(id)arg1;
- (id)getGiftDisplayName:(id)arg1;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (void)layoutSubviews;
- (void)initUI;
- (id)getDefaultGiftThumbImage;
- (void)updateWithViewModel:(id)arg1;
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

