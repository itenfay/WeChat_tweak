//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface AffNewLifeSyncManagerImpl : NSObject
{
}

- (id)getLiteAppVersionInfo;
- (id)mergeSyncKey:(id)arg1 newKey:(id)arg2;
- (_Bool)isShowWebSearchEntry;
- (_Bool)isShowLookOneLookEntry;
- (id)getWebSearchRequestSyncConfig;
- (id)getNewLifeRequestSyncResult;
- (id)getConfigSyncKeyPathList:(int)arg1;
- (_Bool)enableSync:(int)arg1 syncScene:(int)arg2;
- (void)handleCmd:(int)arg1 cmd:(id)arg2 syncScene:(int)arg3 handleFinderSync:(_Bool)arg4;
- (id)debugSwitchInfo:(id)arg1;
- (id)debugInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

