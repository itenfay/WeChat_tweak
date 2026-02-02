//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, MMWebImageView, NSString, SightIconView, SimpleImgInfo, UIImage;
@protocol FavPlayerViewProtocol, MMFullScreenItemViewDelegate;

@interface MMFullScreenItemView : UIView
{
    SightIconView *m_sightIconView;
    MMUILabel *m_hintLabel;
    _Bool m_isItemShowing;
    MMWebImageView *m_imageView;
    _Bool m_hasPlayVideo;
    id <MMFullScreenItemViewDelegate> _delegate;
    SimpleImgInfo *_imgInfo;
    UIView<FavPlayerViewProtocol> *_playerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView<FavPlayerViewProtocol> *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) SimpleImgInfo *imgInfo; // @synthesize imgInfo=_imgInfo;
@property(nonatomic) __weak id <MMFullScreenItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tryToDownLoadVideo;
- (void)onPlayerClickCloseButton;
- (void)onGetVideoViewBottomLineCenterY:(double *)arg1 leftPartOffset:(double *)arg2 rightPartWidth:(double *)arg3 rightPartMargin:(double *)arg4;
- (void)onPlayerStartPlay;
- (void)onToolViewAutoClose;
- (void)onTapCloseButton:(id)arg1;
- (void)onTapSightIconView;
- (void)onFavSightSizeDidChange:(id)arg1;
- (void)onScreenDragCancel;
- (void)onScreenDragBegin;
- (_Bool)isNeedLazyDownload;
- (void)onSingleTap;
- (void)updateImage:(id)arg1;
- (_Bool)isReady;
- (void)HideDataExpiredView;
- (void)FavDataExpiredViewResize;
- (void)showFavDataExpiredView;
- (void)releaseContentView;
- (_Bool)isItemShowing;
- (void)onHide;
- (void)didFullScreenAnimationCompleted;
- (void)onShow;
- (void)onWilAnimateClose;
- (void)setAnimateFrame:(struct CGRect)arg1;
- (void)onWillAnimateShow;
- (void)tryPlaySight;
- (void)initContentView:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (void)resize;
- (void)setFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIImage *image;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

