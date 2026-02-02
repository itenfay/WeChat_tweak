//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString;
@protocol DelAdminLogicDelegate;

@interface DelAdminLogic
{
    id <DelAdminLogicDelegate> m_delegate;
    _Bool m_bNeedReload;
    CContact *_m_roomContact;
    CContact *_m_adminContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *m_adminContact; // @synthesize m_adminContact=_m_adminContact;
@property(retain, nonatomic) CContact *m_roomContact; // @synthesize m_roomContact=_m_roomContact;
@property(nonatomic) __weak id <DelAdminLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)onUpdateDeleteAdmin;
- (void)OnDelGroupAdmin:(id)arg1 withResult:(unsigned int)arg2 adminList:(id)arg3 errTip:(id)arg4;
- (void)delAdmin;
- (void)doDelAdmin;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

