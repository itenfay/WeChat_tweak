//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonCustomAddLogicController, NSString;

@interface LiteAppJsApiEmoticonOpenSelfie
{
    EmoticonCustomAddLogicController *_emoticonAddLogicController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonCustomAddLogicController *emoticonAddLogicController; // @synthesize emoticonAddLogicController=_emoticonAddLogicController;
- (void)onAddEmoticonDetectIfDismissViewController:(id)arg1;
- (void)onAddEmoticonFinishedWithWrap:(id)arg1 isSucceeded:(_Bool)arg2;
- (void)onAddCustomEmoticonPendingUploadWithWrap:(id)arg1;
- (void)onTakePhotoCancelled;
- (id)getViewController;
- (id)errMsgWith:(id)arg1;
- (void)endWithOK;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

