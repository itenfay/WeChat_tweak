//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface WAJSEventHandler_shareTextMessage : NSObject
{
    MISSING_TYPE *forwardMessageLogic;
}

- (id)init;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (id)getCurrentViewController;

@end

