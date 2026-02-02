//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CAShapeLayer, MMMusicLiveLyricDisplayView, MMMusicMVEditorCardSlider, MMMusicMVEpisodeItemCellView, MMMusicMVTrackItem, NSString, UIButton, UIImageView;
@protocol MMMusicMVEditorCardCellDelegate;

@interface MMMusicMVEditorCardCell : UICollectionViewCell
{
    CDUnknownBlockType _onTappedRevertBlock;
    CDUnknownBlockType _onTappedCropBlock;
    CDUnknownBlockType _onSlideProgressBlock;
    id <MMMusicMVEditorCardCellDelegate> _cellViewDelegate;
    MMMusicLiveLyricDisplayView *_lyricView;
    MMMusicMVEditorCardSlider *_slider;
    MMMusicMVEpisodeItemCellView *_videoView;
    MMMusicMVTrackItem *_cellModel;
    UIImageView *_defaultBgImageView;
    UIButton *_revertButton;
    UIButton *_cropButton;
    CAShapeLayer *_borderLayer;
}

+ (double)videoViewCenterYOffset:(double)arg1;
+ (double)videoViewHeightWithCellHeight:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(retain, nonatomic) UIButton *cropButton; // @synthesize cropButton=_cropButton;
@property(retain, nonatomic) UIButton *revertButton; // @synthesize revertButton=_revertButton;
@property(retain, nonatomic) UIImageView *defaultBgImageView; // @synthesize defaultBgImageView=_defaultBgImageView;
@property(retain, nonatomic) MMMusicMVTrackItem *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) MMMusicMVEpisodeItemCellView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) MMMusicMVEditorCardSlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) MMMusicLiveLyricDisplayView *lyricView; // @synthesize lyricView=_lyricView;
@property(nonatomic) __weak id <MMMusicMVEditorCardCellDelegate> cellViewDelegate; // @synthesize cellViewDelegate=_cellViewDelegate;
@property(copy, nonatomic) CDUnknownBlockType onSlideProgressBlock; // @synthesize onSlideProgressBlock=_onSlideProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType onTappedCropBlock; // @synthesize onTappedCropBlock=_onTappedCropBlock;
@property(copy, nonatomic) CDUnknownBlockType onTappedRevertBlock; // @synthesize onTappedRevertBlock=_onTappedRevertBlock;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (_Bool)episodeItemCellViewIsInUse:(id)arg1;
- (void)handleTappedCrop:(id)arg1;
- (void)handleTappedRevert:(id)arg1;
- (void)cardSlider:(id)arg1 didFinishPanningTimeTo:(float)arg2;
- (void)updateMusicPlayOffset:(float)arg1;
- (_Bool)hasVideoSelected;
- (void)setSelected:(_Bool)arg1;
- (void)setAccessoriesAlpha:(double)arg1;
- (void)updateSubviewsExceptVideo;
- (void)setCellModel:(id)arg1 initialVideoTime:(double)arg2;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

