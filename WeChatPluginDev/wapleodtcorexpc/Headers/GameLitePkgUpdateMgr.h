//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GameLitePkgUpdateMgr
{
}

- (void)callComplectionWithPkgId:(id)arg1 liteAppId:(id)arg2 complectionBlock:(CDUnknownBlockType)arg3 liteItem:(id)arg4;
- (id)doubleCheckGetLiteAppInfoItemWithPkgId:(id)arg1 liteAppId:(id)arg2;
- (_Bool)getGameLitePkgWithPkgId:(id)arg1 liteAppId:(id)arg2 pagePath:(id)arg3 complectionBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

