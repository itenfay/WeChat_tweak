//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSApiScopeAuthViewModel, JSApiScopeAuthorizeInfo, NSString;

@interface JSApiScopeAuthorizePageSheet
{
    unsigned int _selectedAvatarId;
    unsigned int _sessionId;
    JSApiScopeAuthViewModel *_asaViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSApiScopeAuthViewModel *asaViewModel; // @synthesize asaViewModel=_asaViewModel;
@property(nonatomic) unsigned int sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int selectedAvatarId; // @synthesize selectedAvatarId=_selectedAvatarId;
- (id)subViewModel;
- (id)customSubviewClassList;
- (void)onAddAvatarSuccess:(id)arg1;
- (void)scrollToCurrentIndex;
- (void)markAvartarIdSelected:(unsigned int)arg1;
- (void)tryAddAvatar;
- (void)handleDelAvatarResp:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)deleteOneAvatarInfo:(id)arg1;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) JSApiScopeAuthorizeInfo *info; // @dynamic info;
@property(readonly) Class superclass;

@end

