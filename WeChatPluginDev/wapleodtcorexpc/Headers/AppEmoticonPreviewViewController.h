//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, EmoticonCustomAddLogicController, MMImageBrowseView, MMUIActivityIndicatorView, NSString, UIButton, UIView, WCActionSheet;

@interface AppEmoticonPreviewViewController
{
    MMImageBrowseView *m_imageView;
    UIButton *m_srcBtn;
    NSString *username;
    CMessageWrap *msgWrap;
    id singleTapOnNav;
    WCActionSheet *m_actionSheet;
    UIView *_bkgView;
    EmoticonCustomAddLogicController *_addEmoticonLogic;
    MMUIActivityIndicatorView *_smallLoadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *smallLoadingView; // @synthesize smallLoadingView=_smallLoadingView;
@property(retain, nonatomic) EmoticonCustomAddLogicController *addEmoticonLogic; // @synthesize addEmoticonLogic=_addEmoticonLogic;
@property(retain, nonatomic) UIView *_bkgView; // @synthesize _bkgView;
@property(retain, nonatomic) WCActionSheet *m_actionSheet; // @synthesize m_actionSheet;
@property(retain, nonatomic) id singleTapOnNav; // @synthesize singleTapOnNav;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap;
@property(retain, nonatomic) NSString *username; // @synthesize username;
- (void)onAppEmoticonDownloadFinished:(id)arg1;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)onImageBrowseViewDidZoom;
- (void)onSingleTapImageBrowseView;
- (void)setFullScreen:(_Bool)arg1;
- (void)viewWillBeInteractivePoped;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)removeNvGestureRecognizer;
- (void)addNvGestureRecognizer;
- (void)onSingleTapOnNavigationBar:(id)arg1;
- (void)showStatusBar;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onSaveEmoticon:(id)arg1;
- (void)initFromSourceButton;
- (void)updateEmoticonView;
- (void)initDownloadedView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidTransitionToNewSize;
- (void)removeSmallLoadingView;
- (void)addSmallLoadingView;
- (void)viewDidLoad;
- (void)addBackgroundView;
- (void)onOperate:(id)arg1;
- (void)onReturn;
- (void)onSwipeRightNavigationButton:(id)arg1;
- (void)launch:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

