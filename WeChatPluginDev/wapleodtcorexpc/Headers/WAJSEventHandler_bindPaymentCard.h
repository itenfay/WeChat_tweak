//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WAJSEventHandler_bindPaymentCard
{
    NSMutableDictionary *_param;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *param; // @synthesize param=_param;
- (void)onAddPayCardResult:(_Bool)arg1;
- (id)getCurrentURL;
- (id)getParams;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

