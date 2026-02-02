//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface WAJSEventHandler_insertLivePlayer
{
    NSDictionary *_eventDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *eventDic; // @synthesize eventDic=_eventDic;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (_Bool)checkCanSetAudioAcitve;
- (void)realInsertLivePlayer;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

