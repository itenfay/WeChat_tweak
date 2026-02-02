//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton;

@interface EnterpriseOpenWeworkBottomBar
{
    UIButton *_weworkButton;
    NSString *_iconUrl;
}

- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)updateIconImage:(id)arg1;
- (void)updateBtnTitle:(id)arg1 icon:(id)arg2 titleColor:(id)arg3;
- (void)addOpenWeworkButton:(SEL)arg1 target:(id)arg2 btnTitle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

