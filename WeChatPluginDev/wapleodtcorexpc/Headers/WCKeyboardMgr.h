//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCKeyboardMgr
{
    _Bool _externalKeyboardConnected;
    _Bool _receiveNotification;
}

@property(nonatomic) _Bool receiveNotification; // @synthesize receiveNotification=_receiveNotification;
@property(nonatomic) _Bool externalKeyboardConnected; // @synthesize externalKeyboardConnected=_externalKeyboardConnected;
- (void)externalKeyboardDisconnect:(id)arg1;
- (void)externalKeyboardConnect:(id)arg1;
- (_Bool)isExternalKeyboardConnected;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

