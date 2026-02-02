//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AddMemLogic, CContact, NSString, RoomContactSelectViewController;
@protocol ViewMemLogicDelegate;

@interface ViewMemLogic : NSObject
{
    id <ViewMemLogicDelegate> m_delegate;
    AddMemLogic *m_addMemLogic;
    RoomContactSelectViewController *m_vc;
    _Bool m_bNeedReload;
    _Bool _m_bShowWithGrid;
    CContact *_m_oContact;
    struct CGPoint _m_bContentOffset;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint m_bContentOffset; // @synthesize m_bContentOffset=_m_bContentOffset;
@property(nonatomic) _Bool m_bShowWithGrid; // @synthesize m_bShowWithGrid=_m_bShowWithGrid;
@property(retain, nonatomic) CContact *m_oContact; // @synthesize m_oContact=_m_oContact;
@property(nonatomic) __weak id <ViewMemLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned int)arg2 memberList:(id)arg3 errTip:(id)arg4;
- (void)didClickDelContact:(id)arg1;
- (void)onCancelSelectContact;
- (void)didSelectContact:(id)arg1;
- (void)roomContactSearchBarDidBecomeFirstResponse;
- (void)newMessageFromContactInfo:(id)arg1;
- (id)getViewController;
- (void)onAddMemLogicStop:(_Bool)arg1;
- (void)addMember;
- (void)didReloadMemData;
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

