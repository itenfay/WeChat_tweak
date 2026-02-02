//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderLiveBeanReporter, WCFinderLiveCoinReporter, WCFinderLiveEncashReporter;

@interface WCCoinBusinessReporter : NSObject
{
    _Bool m_isInCoinDetail;
    _Bool m_isInComplete;
    WCFinderLiveCoinReporter *m_coinReporter;
    WCFinderLiveEncashReporter *m_encashReporter;
    WCFinderLiveBeanReporter *m_beanReporter;
    long long m_rechargeScene;
}

+ (void)bindCoinViewInfo:(id)arg1 priceInfo:(id)arg2;
- (void).cxx_destruct;
- (_Bool)needMonitorConrtol;
- (long long)getCoinScene;
- (void)onSendEvent:(id)arg1;
- (void)onGesture:(id)arg1 withTarget:(id)arg2 withAction:(id)arg3;
- (void)onStartBuyCoinLogic:(long long)arg1;
- (void)onFetchMoneyLinkClick;
- (void)onCoinDeatilLinkClick;
- (void)onViewOperation:(id)arg1 withViewId:(id)arg2;
- (void)onDisappearPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onAppearPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onQuitPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)onEnterPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)unRegisterExtension;
- (void)registerExtension;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

