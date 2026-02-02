//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface FPManager
{
    void * devToken;
    unsigned int fpcgi_count;
    _Bool isRefreshWaiting;
}

- (id)getLKID;
- (id)getWAID;
- (void)handleFpExtids:(id)arg1;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>>)getDevToken;
- (id)getDevTokenSKBuf;
- (void)updateResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)setFreshTime;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)doFPFresh;
- (_Bool)isReqTooMuch;
- (void)checkRefreshForce;
- (void)checkRefreshRetry;
- (void)checkRefresh;
- (void)delayRefresh;
- (void)_checkRefresh;
- (void)onMainControllStart;
- (void)onAuthOK;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
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

