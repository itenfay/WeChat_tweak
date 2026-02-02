//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderInvalidTipsInfo, WCFinderInvalidTipsView;

@interface WCFinderInvalidViewController
{
    WCFinderInvalidTipsInfo *_tipsInfo;
    WCFinderInvalidTipsView *_invalidTipsView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderInvalidTipsView *invalidTipsView; // @synthesize invalidTipsView=_invalidTipsView;
@property(retain, nonatomic) WCFinderInvalidTipsInfo *tipsInfo; // @synthesize tipsInfo=_tipsInfo;
- (void)finderInvalidTipsViewDidClickComplainButton:(id)arg1;
- (void)finderInvalidTipsView:(id)arg1 didClickLink:(id)arg2;
- (void)finderInvalidTipsViewDidClickConfirmButton:(id)arg1;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (id)initWithInvalidTipsInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

