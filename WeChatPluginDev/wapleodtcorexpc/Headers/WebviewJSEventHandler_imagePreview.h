//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PhotoViewController;

@interface WebviewJSEventHandler_imagePreview
{
    PhotoViewController *m_photoViewController;
    long long _webViewInterfaceOrientation;
    unsigned int _currentIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int currentIndex; // @synthesize currentIndex=_currentIndex;
- (void)sendImagePreviewIndexChangeEvent;
- (void)photoVCDidScrollToIndex:(unsigned int)arg1;
- (void)photoVCDidBePoped;
- (void)photoVCWillBePoped;
- (void)dealloc;
- (void)showImageWithUrls:(id)arg1 allCaches:(id)arg2 current:(id)arg3 currentImage:(id)arg4 currentPos:(struct CGRect)arg5 isForbidForward:(_Bool)arg6 isShowMenu:(_Bool)arg7 config:(id)arg8;
- (void)uninitImageViewer;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

