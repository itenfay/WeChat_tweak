//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayJSOpenHKOfflinePayLogicDelegate;

@interface WCPayJSOpenHKOfflinePayLogic
{
    id <WCPayJSOpenHKOfflinePayLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayJSOpenHKOfflinePayLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)authFail;
- (void)authOk;
- (id)initWithJSEvent:(id)arg1 param:(id)arg2 delegate:(id)arg3;

@end

