//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ImageScrollView, MMUIActivityIndicatorView, NSString, WCActionSheetWithScanWXCode;
@protocol GCImgPreviewDelegate;

@interface GCImgPreviewController
{
    ImageScrollView *imageScrollView;
    _Bool _oriNavhidden;
    _Bool _oriStatusBarHidden;
    id <GCImgPreviewDelegate> _delegate;
    MMUIActivityIndicatorView *_activityIndicatorView;
    NSString *_cdnKey;
    NSString *_savePath;
    WCActionSheetWithScanWXCode *_m_actionSheet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCActionSheetWithScanWXCode *m_actionSheet; // @synthesize m_actionSheet=_m_actionSheet;
@property(nonatomic) _Bool oriStatusBarHidden; // @synthesize oriStatusBarHidden=_oriStatusBarHidden;
@property(nonatomic) _Bool oriNavhidden; // @synthesize oriNavhidden=_oriNavhidden;
@property(retain, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(retain, nonatomic) NSString *cdnKey; // @synthesize cdnKey=_cdnKey;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) __weak id <GCImgPreviewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)displayImage:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillAppear:(_Bool)arg1;
- (void)startDownloadImgWithFileKey:(id)arg1 url:(id)arg2 savePath:(id)arg3 aesKey:(id)arg4;
- (void)onSavedPhotosAlbum;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onOperate;
- (void)OnLongPress:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

