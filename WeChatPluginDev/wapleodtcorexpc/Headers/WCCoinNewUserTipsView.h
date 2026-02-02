//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCCoinNewUserTipsDetailView, WecoinNewUserTips;

@interface WCCoinNewUserTipsView
{
    WecoinNewUserTips *_tips;
    WCCoinNewUserTipsDetailView *_tipsDetailView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCoinNewUserTipsDetailView *tipsDetailView; // @synthesize tipsDetailView=_tipsDetailView;
@property(retain, nonatomic) WecoinNewUserTips *tips; // @synthesize tips=_tips;
- (void)didClickDone;
- (void)viewDidLoad;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

