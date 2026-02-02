//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WXCustomWebViewControllerProtocol;

@interface H5VideoProxyManager
{
    _Bool _isInit;
    _Bool _isNeedReInitFromSuspend;
    id <WXCustomWebViewControllerProtocol> _proxyWebviewController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNeedReInitFromSuspend; // @synthesize isNeedReInitFromSuspend=_isNeedReInitFromSuspend;
@property(nonatomic) __weak id <WXCustomWebViewControllerProtocol> proxyWebviewController; // @synthesize proxyWebviewController=_proxyWebviewController;
- (void)tryReInitProxyWhenEnterForground;
- (void)tryDeinitProxyWhenSuspend;
- (void)reportInitIDKeyForResult:(int)arg1;
- (int)preload:(int)arg1 Time:(int)arg2;
- (void)setPlayState:(int)arg1;
- (void)setRemainTime:(int)arg1 PlayDataId:(int)arg2;
- (id)startPlay:(id)arg1;
- (void)stopPlay:(int)arg1;
- (void)doDeinitProxy;
- (void)deinitProxy;
- (_Bool)tryInit;
- (_Bool)initProxyFromWebVC:(id)arg1;
- (void)onServiceEnterForeground;
- (void)applicationWillSuspend;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

