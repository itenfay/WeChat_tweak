//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer;

@interface WebViewJSEventHandler_quicklyAddContact
{
    _Bool _isWaitContactSync;
    MMTimer *_timerContactSync;
}

- (void).cxx_destruct;
- (void)onModifyContact:(id)arg1;
- (void)callbackAddContactOK;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onTimeoutContactSync:(id)arg1;
- (void)invalidateContactSyncTimer;
- (void)scheduleContactSyncTimer;
- (void)CreateVerify:(id)arg1 andScene:(unsigned int)arg2 reportInfo:(id)arg3 scenenote:(id)arg4 finderBuffer:(id)arg5 searchClickId:(id)arg6;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;

@end

