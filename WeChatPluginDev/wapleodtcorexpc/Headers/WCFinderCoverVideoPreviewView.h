//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset, AVAssetImageGenerator, AVPlayer, AVPlayerItem, AVPlayerLayer, MMUIScrollView, NSString, UIImageView, UIView, WCFinderCropRectModel, WCFinderPreviewEditVideoCompositionTask;

@interface WCFinderCoverVideoPreviewView
{
    MMUIScrollView *_scrollView;
    UIView *_blurView;
    UIView *_shadowView;
    WCFinderCropRectModel *_cropRectModel;
    double _keyFrameRate;
    AVAsset *_playerAVAsset;
    UIView *_playerContainerView;
    double _videoDuration;
    AVPlayerItem *_playerItem;
    AVPlayer *_avPlayer;
    AVPlayerLayer *_playerLayer;
    UIView *_compositionView;
    UIImageView *_specialImageView;
    AVPlayerItem *_playerBkgItem;
    AVPlayer *_avBkgPlayer;
    AVPlayerLayer *_playerBkgLayer;
    UIView *_playerBgkView;
    WCFinderPreviewEditVideoCompositionTask *_compositionTask;
    AVAssetImageGenerator *_coverGenerator;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAssetImageGenerator *coverGenerator; // @synthesize coverGenerator=_coverGenerator;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) WCFinderPreviewEditVideoCompositionTask *compositionTask; // @synthesize compositionTask=_compositionTask;
@property(retain, nonatomic) UIView *playerBgkView; // @synthesize playerBgkView=_playerBgkView;
@property(retain, nonatomic) AVPlayerLayer *playerBkgLayer; // @synthesize playerBkgLayer=_playerBkgLayer;
@property(retain, nonatomic) AVPlayer *avBkgPlayer; // @synthesize avBkgPlayer=_avBkgPlayer;
@property(retain, nonatomic) AVPlayerItem *playerBkgItem; // @synthesize playerBkgItem=_playerBkgItem;
@property(retain, nonatomic) UIImageView *specialImageView; // @synthesize specialImageView=_specialImageView;
@property(retain, nonatomic) UIView *compositionView; // @synthesize compositionView=_compositionView;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) UIView *playerContainerView; // @synthesize playerContainerView=_playerContainerView;
@property(retain, nonatomic) AVAsset *playerAVAsset; // @synthesize playerAVAsset=_playerAVAsset;
@property(nonatomic) double keyFrameRate; // @synthesize keyFrameRate=_keyFrameRate;
- (void)setCropRectModel:(id)arg1;
- (void)setShadowView:(id)arg1;
- (void)setBlurView:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)curFullCoverImage:(CDUnknownBlockType)arg1;
- (void)updateCropRectModel;
- (struct CGRect)getCoverVisualRectByImage:(id)arg1;
- (void)curPreviewCoverImage:(CDUnknownBlockType)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)getPlayerVideoSize;
- (struct CGAffineTransform)transformFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2;
- (void)_scrollViewContentOffset:(struct CGPoint)arg1;
- (void)refreshPlayerPreviewByModeChange:(_Bool)arg1;
- (void)refreshPlayerPreview;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_relayoutCompositionView;
- (void)loadPreviewViewByVideoURL:(id)arg1 compositionTask:(id)arg2 specialImage:(id)arg3 cropRectModel:(id)arg4;
- (void)adjustShadowViewMask:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)shadowView;
- (id)scrollView;
- (id)cropRectModel;
- (id)blurView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

