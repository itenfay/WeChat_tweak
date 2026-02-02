//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCSCheckBehaviorMgr
{
    NSMutableDictionary *_dicTextFieldCheck;
    _Bool _bEnableEventMonitor;
    struct shared_ptr<__WCSN::__WCSTECP> _TECInstance;
    map_94801aa5 techeckts;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onSendEvent:(id)arg1;
- (id)convertScenes:(unsigned int)arg1;
- (void)endRecord:(unsigned int)arg1;
- (id)getRecord:(unsigned int)arg1;
- (_Bool)startRecord:(unsigned int)arg1;
- (void)recordEvent:(id)arg1;
- (id)getTextFieldCheckData:(unsigned int)arg1;
- (void)removeTextFieldCheck:(unsigned int)arg1;
- (void)pauseTextFieldCheck:(unsigned int)arg1;
- (void)startTextFieldCheck:(unsigned int)arg1;
- (void)dealloc;
- (_Bool)getTECEnable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

