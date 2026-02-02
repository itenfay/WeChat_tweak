//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSString;

@interface WAJSEventHandler_updateAppContact
{
    NSString *_requestUsername;
    NSString *_requestAppId;
    NSString *_keyPath;
    MMTimer *_contactGetterTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *contactGetterTimer; // @synthesize contactGetterTimer=_contactGetterTimer;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(copy, nonatomic) NSString *requestAppId; // @synthesize requestAppId=_requestAppId;
@property(copy, nonatomic) NSString *requestUsername; // @synthesize requestUsername=_requestUsername;
- (void)onGetContactTimeout;
- (void)onUpdateWeAppContactSuccess:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

