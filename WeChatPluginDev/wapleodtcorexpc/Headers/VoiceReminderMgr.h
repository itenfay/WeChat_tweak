//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface VoiceReminderMgr
{
    NSMutableDictionary *_dicRemindId;
}

- (void).cxx_destruct;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)deleteRemindMsgs:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)onVoiceReminderAlertClick:(id)arg1 viewDetail:(_Bool)arg2;
- (void)onVoiceReminderAlertClickOK:(id)arg1;
- (void)onVoiceReminderAlertClickDetail:(id)arg1;
- (void)onNotifyRemindMsg:(id)arg1;
- (_Bool)shouldNotifyRemindMsg:(id)arg1;
- (void)doRemindMsgsOp:(unsigned int)arg1 arrRemindId:(id)arg2;
- (void)onRemindMsgsOpReturn:(id)arg1 Event:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

