//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, FinderLiveGiftWallInfo_GiftMetaInfo, MMFinderLiveTask, MMFinderLiveTaskId, MMUILabel, MMWebImageView, UIView;

@interface MMFinderLiveRewardGiftWallCollectionViewCell : UICollectionViewCell
{
    _Bool _isDarkMode;
    MMWebImageView *_topOneUserHeadImageView;
    MMWebImageView *_thumbnailView;
    MMUILabel *_displayNameLabel;
    MMUILabel *_giftCountLabel;
    UIView *_topOneUserView;
    CAGradientLayer *_topOneUserGradientLayer;
    FinderLiveGiftWallInfo_GiftMetaInfo *_giftMetaInfo;
    MMFinderLiveTaskId *_taskId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) FinderLiveGiftWallInfo_GiftMetaInfo *giftMetaInfo; // @synthesize giftMetaInfo=_giftMetaInfo;
@property(retain, nonatomic) CAGradientLayer *topOneUserGradientLayer; // @synthesize topOneUserGradientLayer=_topOneUserGradientLayer;
@property(retain, nonatomic) UIView *topOneUserView; // @synthesize topOneUserView=_topOneUserView;
@property(retain, nonatomic) MMUILabel *giftCountLabel; // @synthesize giftCountLabel=_giftCountLabel;
@property(retain, nonatomic) MMUILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) MMWebImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(readonly, nonatomic) _Bool isDarkMode; // @synthesize isDarkMode=_isDarkMode;
@property(retain, nonatomic) MMWebImageView *topOneUserHeadImageView; // @synthesize topOneUserHeadImageView=_topOneUserHeadImageView;
- (double)imageAlpha;
- (id)topOneUserHeadImage;
@property(readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
- (void)layoutSubviews;
- (void)initUI;
- (void)updateWithGiftMetaInfo:(id)arg1 taskId:(id)arg2;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

