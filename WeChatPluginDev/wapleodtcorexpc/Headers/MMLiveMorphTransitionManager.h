//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface MMLiveMorphTransitionManager
{
    unsigned long long _status;
    unsigned long long _mode;
    NSMutableDictionary *_transitionContext;
}

+ (id)findDismissTargetVCWithTopVC:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void)onPreparationTimeout;
- (void)resetState;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)cancelTransition;
- (void)endTransition;
- (void)notifyTransitionEnding;
- (void)notifyTransitionStartedWithDuration:(double)arg1;
- (id)transitionContextItemWithKey:(id)arg1;
- (void)setTransitionContextItem:(id)arg1 withKey:(id)arg2;
- (void)prepareTransitionInMode:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

