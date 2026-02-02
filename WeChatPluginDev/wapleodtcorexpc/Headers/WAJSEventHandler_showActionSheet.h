//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WAWebActionSheet;

@interface WAJSEventHandler_showActionSheet
{
    WAWebActionSheet *_actionSheet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAWebActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
- (void)onSelected:(long long)arg1;
- (void)onCancel;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

