//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIScrollView, UIView, WCFinderCropRectModel;
@protocol WCFinderCoverBasePreviewViewDelegate;

@interface WCFinderCoverBasePreviewView
{
    id <WCFinderCoverBasePreviewViewDelegate> _delegate;
    MMUIScrollView *_scrollView;
    UIView *_blurView;
    UIView *_shadowView;
    WCFinderCropRectModel *_cropRectModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCropRectModel *cropRectModel; // @synthesize cropRectModel=_cropRectModel;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) MMUIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <WCFinderCoverBasePreviewViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGRect)getCoverVisualRectByImage:(id)arg1;
- (void)curFullCoverImage:(CDUnknownBlockType)arg1;
- (void)curPreviewCoverImage:(CDUnknownBlockType)arg1;
- (struct CGSize)getPlayerVideoSize;
- (void)refreshPlayerPreviewByModeChange:(_Bool)arg1;
- (id)mergeEditImageFromImage:(id)arg1;

@end

