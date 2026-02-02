//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString;

@interface EmoticonCustomAddMgr
{
    NSMutableSet *_addEmoticonTasks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *addEmoticonTasks; // @synthesize addEmoticonTasks=_addEmoticonTasks;
- (void)onAddEmoticonTaskFinish:(id)arg1;
- (void)showEmoticonCameraWithLensId:(id)arg1 inViewController:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

