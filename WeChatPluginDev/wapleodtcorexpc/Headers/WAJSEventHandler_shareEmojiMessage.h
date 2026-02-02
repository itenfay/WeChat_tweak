//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface WAJSEventHandler_shareEmojiMessage
{
    MISSING_TYPE *forwardMessageLogic;
    MISSING_TYPE *needShowEntrance;
    MISSING_TYPE *entrancePath;
    MISSING_TYPE *useForChatTool;
}

- (void).cxx_destruct;
- (id)init;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (id)getCurrentViewController;

@end

