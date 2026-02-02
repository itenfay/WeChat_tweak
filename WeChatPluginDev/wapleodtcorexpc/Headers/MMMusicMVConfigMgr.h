//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMMusicMVConfigMgr
{
    _Bool _degradeToH5;
}

- (_Bool)isForbidMusicCache;
- (_Bool)isChatRoomSwitchOpen;
- (unsigned long long)__musicUIStyleWithMusicBizScene:(unsigned long long)arg1 bNewMvMsg:(_Bool)arg2 appId:(id)arg3;
- (unsigned long long)musicUIStyleWithMusicBizScene:(unsigned long long)arg1 bNewMvMsg:(_Bool)arg2 appId:(id)arg3;
- (void)commonInit;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

