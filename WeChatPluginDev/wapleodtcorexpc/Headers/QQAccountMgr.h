//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface QQAccountMgr
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleBindQQ:(id)arg1 Event:(unsigned int)arg2;
- (void)handleUnBindQQ:(id)arg1 Event:(unsigned int)arg2;
- (void)unBindQQclearQQ;
- (_Bool)unBindQQ:(id)arg1;
- (_Bool)bindQQ:(id)arg1;
- (void)clearQQFlags;
- (void)uninstallQQPluginWithoutCGI;
- (void)clearQQData;
- (void)clearWBReader;
- (void)clearQQInvite;
- (void)clearQQFriend;
- (void)clearWBSX;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

