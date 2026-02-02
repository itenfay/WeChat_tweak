//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAJSEventHandler_publishWeChatState
{
}

+ (id)generateSourceNameFromNickName:(id)arg1 debugMode:(unsigned int)arg2;
+ (id)generateSourceIdFromAppId:(id)arg1;
- (void)onTextStatePublishCancelled;
- (void)onTextStatePublished;
- (void)doPublish:(id)arg1;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

