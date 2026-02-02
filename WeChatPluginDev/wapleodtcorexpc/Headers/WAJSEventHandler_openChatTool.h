//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface WAJSEventHandler_openChatTool : NSObject
{
    MISSING_TYPE *entryPagePath;
    MISSING_TYPE *sessionSelectController;
}

- (id)init;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)handleJSEvent:(id)arg1;

@end

