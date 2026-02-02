//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDate, NSString, UIViewController, WCFinderDataItem;

@interface MMLiveResumeManager
{
    _Bool _hasCheckedAbnormal;
    WCFinderDataItem *_finderDataItem;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
@property(nonatomic) _Bool hasCheckedAbnormal; // @synthesize hasCheckedAbnormal=_hasCheckedAbnormal;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 withText:(id)arg3 withTipsVC:(id)arg4;
- (_Bool)validatePresentingViewController:(id)arg1;
- (_Bool)validateFinderDataItem:(id)arg1;
- (_Bool)resumeFinderLiveFromViewController:(id)arg1;
- (_Bool)showResumeAlertViewFromViewController:(id)arg1;
- (void)checkAbnormalFinderLiveWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSDate *lastFinderLivingTime;
@property(nonatomic) _Bool isFinderLiving;
- (_Bool)isFinderLiveAbnormal;
- (void)unmarkFinderLiving;
- (void)markFinderLiving;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

