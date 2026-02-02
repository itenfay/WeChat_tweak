//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCCardAddHelper;

@interface WAJSEventHandler_addCard
{
    WCCardAddHelper *_addHelper;
}

- (void).cxx_destruct;
- (void)onAddCancel;
- (void)onAddFail:(id)arg1;
- (void)onAddSuccess:(id)arg1;
- (id)getViewController;
- (void)handleJSEvent:(id)arg1;

@end

