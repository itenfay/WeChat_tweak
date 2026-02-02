//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WATemplateMsgMngViewController
{
    unsigned long long _notifyStatus;
    unsigned long long _audioNotifyStatus;
}

@property(nonatomic) unsigned long long audioNotifyStatus; // @synthesize audioNotifyStatus=_audioNotifyStatus;
@property(nonatomic) unsigned long long notifyStatus; // @synthesize notifyStatus=_notifyStatus;
- (void)onTemplateMsgMgrInfoChanged;
- (void)onAudioNotifySwitch:(_Bool)arg1;
- (void)onNotifySwitch:(_Bool)arg1;
- (void)reloadTableView;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)reloadSwitchData;
- (void)viewDidLoad;
- (void)registerExtension;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

