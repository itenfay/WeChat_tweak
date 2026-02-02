//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer;

@interface WAJSEventHandler_private_quicklyAddBrandContact
{
    _Bool _isWaitContactSync;
    MMTimer *_timerContactSync;
}

- (void).cxx_destruct;
- (void)onModifyContact:(id)arg1;
- (void)callbackAddContactOK;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)onTimeoutContactSync:(id)arg1;
- (void)invalidateContactSyncTimer;
- (void)scheduleContactSyncTimer;
- (void)CreateVerify:(id)arg1 andScene:(unsigned int)arg2;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;

@end

