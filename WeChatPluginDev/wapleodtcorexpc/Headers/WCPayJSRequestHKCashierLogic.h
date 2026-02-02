//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayJSRequestHKCashierLogicDelegate;

@interface WCPayJSRequestHKCashierLogic
{
    id <WCPayJSRequestHKCashierLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayJSRequestHKCashierLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)authFail;
- (void)authOk;
- (id)initWithJSEvent:(id)arg1 param:(id)arg2 delegate:(id)arg3;

@end

