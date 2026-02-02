//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMAssetSelectCheckButton, MMUILabel, NSString, UIImageView, UILabel, UIView, WCImageView, WCMediaItem;
@protocol MMAssetPickerControllerFinderAssetDelegate, WCAlbumPickerCollectionCellViewDelegate;

@interface WCAlbumPickerCollectionCellView : UICollectionViewCell
{
    _Bool _isInPreview;
    _Bool _enabled;
    _Bool _isSelected;
    id <WCAlbumPickerCollectionCellViewDelegate> _delegate;
    id <MMAssetPickerControllerFinderAssetDelegate> _finderDelegate;
    WCMediaItem *_mediaItem;
    WCImageView *_thumbImageView;
    UIView *_selectionBgView;
    MMUILabel *_nameLabel;
    MMUILabel *_sizeLabel;
    UIView *_disabledMaskView;
    UIView *_tagBackgroundView;
    UILabel *_lengthLabel;
    UIView *_videoLogoView;
    UIView *_editImageView;
    UIImageView *_privateImageView;
    MMAssetSelectCheckButton *_selectCheckButton;
    double _imgHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double imgHeight; // @synthesize imgHeight=_imgHeight;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) MMAssetSelectCheckButton *selectCheckButton; // @synthesize selectCheckButton=_selectCheckButton;
@property(retain, nonatomic) UIImageView *privateImageView; // @synthesize privateImageView=_privateImageView;
@property(retain, nonatomic) UIView *editImageView; // @synthesize editImageView=_editImageView;
@property(retain, nonatomic) UIView *videoLogoView; // @synthesize videoLogoView=_videoLogoView;
@property(retain, nonatomic) UILabel *lengthLabel; // @synthesize lengthLabel=_lengthLabel;
@property(retain, nonatomic) UIView *tagBackgroundView; // @synthesize tagBackgroundView=_tagBackgroundView;
@property(retain, nonatomic) UIView *disabledMaskView; // @synthesize disabledMaskView=_disabledMaskView;
@property(retain, nonatomic) MMUILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *selectionBgView; // @synthesize selectionBgView=_selectionBgView;
@property(retain, nonatomic) WCImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool isInPreview; // @synthesize isInPreview=_isInPreview;
@property(retain, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(nonatomic) __weak id <MMAssetPickerControllerFinderAssetDelegate> finderDelegate; // @synthesize finderDelegate=_finderDelegate;
@property(nonatomic) __weak id <WCAlbumPickerCollectionCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onWCAlbumPickerControllerUpdateAllAssetViewBorderWithMedia:(id)arg1;
- (void)onWCAlbumPickerControllerFinishEditMedia:(id)arg1;
- (void)onWCAlbumPickerControllerChangeSelectInfosOrder;
- (void)onWCAlbumPickerControllerChangeSelectInfo:(id)arg1 index:(long long)arg2;
- (id)timeStringBySeconds:(double)arg1;
- (void)updateBgMaskView;
- (void)toggleSelection;
- (void)showedSelectedMarkWithIndex:(long long)arg1 animated:(_Bool)arg2;
- (struct CGPoint)accessibilityActivationPoint;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (_Bool)accessibilityPerformMagicTap;
- (void)updateAssetViewEnabledWithSelectedCount:(unsigned long long)arg1;
- (_Bool)isCurrentAssetEnable;
- (void)updateEnabledState;
- (void)showAseetNameAndSize;
- (void)showEditedLogoView;
- (void)showVideoLogoViewWithTime:(id)arg1;
- (void)showTagBGView;
- (double)tagLogoLBMargin;
- (void)updateAssetInfo;
- (void)prepareForReuse;
- (void)updatePrivacyIcon;
- (void)commInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

