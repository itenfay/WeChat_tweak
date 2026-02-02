//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WebviewJSEventHandler_PlayVoice
{
    _Bool _stopVoiceFlag;
}

- (void)OnPlayError:(id)arg1;
- (void)sendEndEventToJS:(id)arg1;
- (void)OnEndPlay:(id)arg1;
- (void)OnBeginPlay:(id)arg1;
- (void)setStopVoiceFlag;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

