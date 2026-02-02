//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KindaProxy, MMIUIPage, NSString;

@interface KindaWebViewUIPage
{
    MMIUIPage *_kindaUIPage;
    KindaProxy *_kindProxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KindaProxy *kindProxy; // @synthesize kindProxy=_kindProxy;
@property(retain, nonatomic) MMIUIPage *kindaUIPage; // @synthesize kindaUIPage=_kindaUIPage;
- (void)triggerReport:(long long)arg1 customKey:(id)arg2;
- (void)startLoading:(id)arg1 block:(_Bool)arg2;
- (void)addReportInfo:(id)arg1;
- (void)setWindowSoftInputAdjustMode:(long long)arg1;
- (id)getTitle;
- (void)setTopRightCallbackImpl:(id)arg1;
- (void)setTopRightBtnTitle:(id)arg1 color:(id)arg2;
- (void)setTopRightBtnImage:(id)arg1;
- (void)setTopLeftBackBtnCallbackImpl:(id)arg1;
- (void)setKeyBoardShowCallbackImpl:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)refreshNavigationBar;
- (void)endIgnoringInteractionEvents;
- (void)endEditing;
- (void)beginIgnoringInteractionEvents;
- (void)closeUI:(_Bool)arg1;
@property(readonly, copy) NSString *description;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

