//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCMomentsContactMgr
{
    NSMutableDictionary *_usernameUpdateTimeDictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *usernameUpdateTimeDictionary; // @synthesize usernameUpdateTimeDictionary=_usernameUpdateTimeDictionary;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (_Bool)_isInUpdateInterval:(id)arg1 limitDuration:(double)arg2;
- (_Bool)_canUpdateStrangerUsername:(id)arg1;
- (void)_updateStrangerContactWithUsername:(id)arg1;
- (void)_updateStrangerContact:(id)arg1;
- (_Bool)_canUpdateNormalContact:(id)arg1;
- (void)_updateNormalContact:(id)arg1;
- (void)_updateContact:(id)arg1;
- (id)_contactDisplayName:(id)arg1;
- (id)contactWithUsername:(id)arg1;
- (id)contactDisplayNameWithComment:(id)arg1;
- (id)contactDisplayNameWithDataItem:(id)arg1;
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

