//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCImageFullScreenTagView, WCMediaImageViewModel;

@interface WCMediaImageScrollView
{
    WCMediaImageViewModel *_viewModel;
    WCImageFullScreenTagView *_imageTagView;
    struct UIEdgeInsets _imageTagSafeArea;
    struct UIEdgeInsets _imageTagPadding;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCImageFullScreenTagView *imageTagView; // @synthesize imageTagView=_imageTagView;
@property(nonatomic) struct UIEdgeInsets imageTagPadding; // @synthesize imageTagPadding=_imageTagPadding;
@property(nonatomic) struct UIEdgeInsets imageTagSafeArea; // @synthesize imageTagSafeArea=_imageTagSafeArea;
@property(retain, nonatomic) WCMediaImageViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)livePhotoButtonClickedInImageTagView:(id)arg1;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragBegin;
- (void)scrollViewDidZoom:(id)arg1;
- (void)playableImageView:(id)arg1 didChangePlayerState:(unsigned long long)arg2;
- (void)internalDisplayImageMaterial:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)updateVisibleForImageTagView:(_Bool)arg1;
- (void)updateImageTagSafeArea;
- (void)reloadImageTagView;
- (void)displayViewModel:(id)arg1 withImage:(id)arg2 frame:(struct CGRect)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

