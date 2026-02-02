//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCSearchPageState;

@interface WCWebSearchPresenter
{
}

@property(readonly, nonatomic) WCSearchPageState *store;
- (void)hideKeyboard;
- (void)performSearchWithParams:(id)arg1;
- (void)notyfySwitchSearchContext:(id)arg1;
- (void)onSwitchSearchContext:(id)arg1;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;

@end

