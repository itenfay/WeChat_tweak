//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PrivateCommonApiHandler;

@interface WebviewJSEventHandler_privateCommonApi
{
    PrivateCommonApiHandler *_handler;
}

+ (_Bool)isValidPrivateUrl:(id)arg1;
- (void).cxx_destruct;
- (void)handleAccessSystemInfo;
- (void)handleAccessLastUser;
- (_Bool)syncHanleWithOpcode:(id)arg1 params:(id)arg2;
- (Class)handlerClassForOpCode:(id)arg1;
- (id)getViewController;
- (void)handleCommonApiWithResult:(unsigned long long)arg1 params:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

