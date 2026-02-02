//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonCustomManageAddLogic, NSString;

@interface WebviewJSEventHandler_addToEmoticon
{
    NSString *m_activityId;
    EmoticonCustomManageAddLogic *_emoticonAddLogic;
    NSString *_currentUrl;
    NSString *_currentThumbUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentThumbUrl; // @synthesize currentThumbUrl=_currentThumbUrl;
@property(retain, nonatomic) NSString *currentUrl; // @synthesize currentUrl=_currentUrl;
@property(retain, nonatomic) EmoticonCustomManageAddLogic *emoticonAddLogic; // @synthesize emoticonAddLogic=_emoticonAddLogic;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (id)getViewController;
- (void)AddEmoticonFinishedWithWrap:(id)arg1 IsSuccessed:(_Bool)arg2;
- (void)addToEmoticonWithData:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

