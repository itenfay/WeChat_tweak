//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MsgVideoPreloadMgr
{
}

+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ResumePreload;
- (void)PausePreload;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

