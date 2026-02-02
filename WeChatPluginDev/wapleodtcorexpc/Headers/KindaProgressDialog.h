//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLoadingView, MMUIViewController, NSString, WCBizLoadingView;

@interface KindaProgressDialog : NSObject
{
    MMLoadingView *_topLoadingView;
    WCBizLoadingView *_m_loadView;
    MMUIViewController *_vc;
    MMLoadingView *_m_normalGlobalView;
    WCBizLoadingView *_m_payGlobalView;
    MMLoadingView *_m_customGlobalView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLoadingView *m_customGlobalView; // @synthesize m_customGlobalView=_m_customGlobalView;
@property(retain, nonatomic) WCBizLoadingView *m_payGlobalView; // @synthesize m_payGlobalView=_m_payGlobalView;
@property(retain, nonatomic) MMLoadingView *m_normalGlobalView; // @synthesize m_normalGlobalView=_m_normalGlobalView;
@property(nonatomic) __weak MMUIViewController *vc; // @synthesize vc=_vc;
@property(retain, nonatomic) WCBizLoadingView *m_loadView; // @synthesize m_loadView=_m_loadView;
- (void)showCustomLoading:(id)arg1 block:(_Bool)arg2;
- (void)showTopLoading:(id)arg1 block:(_Bool)arg2;
- (void)dismiss;
- (void)insideInitLoadView;
- (id)insideGetCurrentViewController;
- (void)showPayGlobalLoading:(_Bool)arg1;
- (void)showNormalGlobalLoading:(_Bool)arg1;
- (void)showNormalLoading:(_Bool)arg1;
- (void)showToast:(id)arg1;
- (void)showPayProcessImpl:(_Bool)arg1 cancel:(id)arg2;
- (void)showImpl:(id)arg1 canCancel:(_Bool)arg2 cancel:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

