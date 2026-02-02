//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MultiImageScrollView, NSMutableArray, NSMutableSet, NSString, UIImageView, UIPageControl;

@interface NewLifeImagePreviewBrowserViewController
{
    _Bool _isZoomingFromText;
    long long _previewIndex;
    NSMutableArray *_pictureInfos;
    CDUnknownBlockType _previewPhotoDetailCompletion;
    UIPageControl *_pageControl;
    MultiImageScrollView *_imageScrollView;
    UIImageView *_animationImageView;
    NSMutableSet *_urlDownloadSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *urlDownloadSet; // @synthesize urlDownloadSet=_urlDownloadSet;
@property(retain, nonatomic) UIImageView *animationImageView; // @synthesize animationImageView=_animationImageView;
@property(retain, nonatomic) MultiImageScrollView *imageScrollView; // @synthesize imageScrollView=_imageScrollView;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(copy, nonatomic) CDUnknownBlockType previewPhotoDetailCompletion; // @synthesize previewPhotoDetailCompletion=_previewPhotoDetailCompletion;
@property(retain, nonatomic) NSMutableArray *pictureInfos; // @synthesize pictureInfos=_pictureInfos;
@property(nonatomic) long long previewIndex; // @synthesize previewIndex=_previewIndex;
@property(nonatomic) _Bool isZoomingFromText; // @synthesize isZoomingFromText=_isZoomingFromText;
- (void)hideVCAnimation;
- (void)showVCAnimation;
- (id)loadImageWith:(id)arg1 token:(id)arg2 path:(id)arg3 isMainThread:(_Bool)arg4;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (_Bool)ignorePageIndexTitle;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onSingleTap:(id)arg1;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (id)imageAtPage:(unsigned int)arg1 isMainThread:(_Bool)arg2;
- (id)imageAtPage:(unsigned int)arg1;
- (id)getImagePaths;
- (void)onChangePage;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)initLayout;
- (void)initSubviews;
- (void)viewDidLayoutSubviews;
- (_Bool)shouldInteractivePop;
- (void)viewDidLoad;
- (_Bool)useTransparentNavibar;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

