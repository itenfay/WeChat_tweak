//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMessageLogicController, NSString;

@interface WAJSEventHandler_shareVideoMessage
{
    ForwardMessageLogicController *m_forwardMsgLogic;
    NSString *m_tempVideoPath;
}

- (void).cxx_destruct;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)removeTempVideo;
- (id)createTempVideoWithData:(id)arg1 extension:(id)arg2;
- (id)getPackageDataWithPath:(id)arg1;
- (id)getThumbDataWithPath:(id)arg1;
- (id)getVideoRealPathWithPath:(id)arg1;
- (id)genForwardMessageWrapWithVideoPath:(id)arg1 thumbPath:(id)arg2;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

