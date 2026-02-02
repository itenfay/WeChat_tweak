//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WANavigateLogicController;

@interface WAJSEventHandler_openMapApp
{
    WANavigateLogicController *_navLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WANavigateLogicController *navLogic; // @synthesize navLogic=_navLogic;
- (void)onCancelMenu;
- (void)onClickMapApp:(unsigned long long)arg1;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

