//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAAppAuthInfoData, WAContact;

@interface WAAppAuthorizationPayViewController
{
    WAContact *_contact;
    WAAppAuthInfoData *_authInfo;
    CDUnknownBlockType _updateAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType updateAction; // @synthesize updateAction=_updateAction;
@property(retain, nonatomic) WAAppAuthInfoData *authInfo; // @synthesize authInfo=_authInfo;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;
- (_Bool)judgeRiskControlInfo:(id)arg1;
- (void)switchAuthState:(unsigned int)arg1 completeAction:(CDUnknownBlockType)arg2;
- (void)reloadPayVCUI;
- (void)onReturn;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;
- (id)initWithContact:(id)arg1 authInfo:(id)arg2;

@end

