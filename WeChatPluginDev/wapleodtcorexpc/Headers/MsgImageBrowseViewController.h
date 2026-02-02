//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, MMImageBrowseView, MMLoadingView, NSString, UIImage, WCActionSheet;
@protocol ImageBrowseDelegate;

@interface MsgImageBrowseViewController
{
    MMImageBrowseView *m_imageView;
    CMessageWrap *m_wrapMsg;
    UIImage *m_image;
    id <ImageBrowseDelegate> m_delegate;
    MMLoadingView *m_loadingView;
    id m_singleTapGesture;
    id m_doubleTapGesture;
    _Bool m_saveMode;
    WCActionSheet *m_actionSheet;
    struct CGRect m_originRect;
    _Bool _m_bSupportLocateToMsg;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_bSupportLocateToMsg; // @synthesize m_bSupportLocateToMsg=_m_bSupportLocateToMsg;
@property(nonatomic) _Bool m_saveMode; // @synthesize m_saveMode;
@property(retain, nonatomic) id m_doubleTapGesture; // @synthesize m_doubleTapGesture;
@property(retain, nonatomic) id m_singleTapGesture; // @synthesize m_singleTapGesture;
@property(retain, nonatomic) UIImage *m_image; // @synthesize m_image;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)animateShowWithOriginRectInScreen:(struct CGRect)arg1;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLongPress;
- (void)onSingleTapImageBrowseView;
- (void)onSavedPhotosAlbum:(id)arg1;
- (void)onOperate:(id)arg1;
- (void)onDouTapOnNavigationBar:(id)arg1;
- (void)onSingleTapOnNavigationBar:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)dealloc;
- (id)initWithMsgWrap:(id)arg1 originFrame:(struct CGRect)arg2;
- (void)didAppear;
- (void)viewDidAppear:(_Bool)arg1;
- (void)willAppear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillBeInteractivePoped;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)initData;
- (void)initImageView;
- (void)initNavigationBar;
- (id)genDataLength:(unsigned int)arg1;
- (void)GetImage;
- (void)exitFullScreen;
- (void)setFullScreen:(_Bool)arg1;
- (void)removeNvGestureRecognizer;
- (void)addNvGestureRecognizer;
- (void)handleViewWillDisappear;
- (void)handleViewWillAppear;
- (void)showStatusBar;
- (void)hideStatusBar;
- (void)adjustImageViewRect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

