//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIScrollView, MMWebImageView, NSString, UIView, WCFinderCropRectModel;

@interface WCFinderCoverPhotoPreviewView
{
    MMUIScrollView *_scrollView;
    UIView *_shadowView;
    UIView *_blurView;
    WCFinderCropRectModel *_cropRectModel;
    MMWebImageView *_photoImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
- (void)setCropRectModel:(id)arg1;
- (void)setBlurView:(id)arg1;
- (void)setShadowView:(id)arg1;
- (void)setScrollView:(id)arg1;
- (id)getCurrentImageResult;
- (void)curFullCoverImage:(CDUnknownBlockType)arg1;
- (struct CGSize)getPlayerVideoSize;
- (struct CGAffineTransform)transformFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2;
- (void)refreshPlayerPreviewByModeChange:(_Bool)arg1;
- (void)_scrollViewContentOffset:(struct CGPoint)arg1;
- (struct CGRect)getCoverVisualRectByImage:(id)arg1;
- (void)curPreviewCoverImage:(CDUnknownBlockType)arg1;
- (void)updateCropRectModel;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadPreviewByImagePath:(id)arg1 cropRectModel:(id)arg2 fromVC:(id)arg3 loadImageSucBlock:(CDUnknownBlockType)arg4;
- (id)renderThumbImageFrom:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)adjustShadowViewMask:(id)arg1;
- (id)shadowView;
- (id)scrollView;
- (id)blurView;
- (id)cropRectModel;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

