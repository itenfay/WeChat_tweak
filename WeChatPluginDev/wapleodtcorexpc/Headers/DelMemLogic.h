//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, NSMutableDictionary, NSString, RoomContactSelectViewController;
@protocol DelMemLogicDelegate;

@interface DelMemLogic : NSObject
{
    id <DelMemLogicDelegate> m_delegate;
    RoomContactSelectViewController *m_vc;
    _Bool m_bNeedReload;
    NSMutableDictionary *m_dicWillDell;
    CContact *_m_oContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *m_oContact; // @synthesize m_oContact=_m_oContact;
@property(nonatomic) __weak id <DelMemLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)onViewContact:(id)arg1;
- (void)onCancelSelectContact;
- (void)didSelectContact:(id)arg1;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned int)arg2 memberList:(id)arg3 errTip:(id)arg4;
- (void)delMember;
- (void)doDelMember;
- (void)updateRightBtn;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

