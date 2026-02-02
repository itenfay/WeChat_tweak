//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, SessionSelectController;

@interface WAJSEventHandler_shareFinderEndorsementToFriend
{
    int _scene;
    SessionSelectController *_sessionSelectController;
    NSString *_relativePath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *relativePath; // @synthesize relativePath=_relativePath;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) SessionSelectController *sessionSelectController; // @synthesize sessionSelectController=_sessionSelectController;
- (_Bool)onShouldSelectContact:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)checkFinish:(int)arg1 success:(_Bool)arg2;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

