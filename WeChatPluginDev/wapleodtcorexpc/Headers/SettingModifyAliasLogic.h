//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol SettingModifyAliasLogicDelegate;

@interface SettingModifyAliasLogic
{
    id <SettingModifyAliasLogicDelegate> _m_delegate;
}

+ (void)reportSettingModifyAliasBackOrCancelWithSessionid:(id)arg1 andModifyAliasPageScene:(unsigned int)arg2;
+ (void)reportSettingModifyAliasWithSessionid:(id)arg1 andModifyAliasActionCode:(unsigned int)arg2 andModifyAliasErrortype:(unsigned int)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SettingModifyAliasLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)OnModifyAlias:(id)arg1;
- (_Bool)modifyAlias:(id)arg1 checkCanSetAliasTicket:(id)arg2 setAliasPwdTicket:(id)arg3 setAliasHumanFaceTicket:(id)arg4;
- (void)OnCheckAliasValid:(id)arg1;
- (_Bool)checkAliasValid:(id)arg1;
- (void)OnCheckCanSetAlias:(id)arg1;
- (_Bool)checkCanSetAlias;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;

@end

