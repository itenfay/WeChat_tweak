//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, NSString, RoomContactSelectViewController;
@protocol ChangeOwnerLogicDelegate;

@interface ChangeOwnerLogic : NSObject
{
    id <ChangeOwnerLogicDelegate> m_delegate;
    RoomContactSelectViewController *m_vc;
    _Bool m_bNeedReload;
    CContact *_m_oContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *m_oContact; // @synthesize m_oContact=_m_oContact;
@property(nonatomic) __weak id <ChangeOwnerLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)onCancelSelectContact;
- (void)didSelectContact:(id)arg1;
- (void)OnChangeChatRoomOwner:(id)arg1 NewOwner:(id)arg2 Success:(_Bool)arg3;
- (void)onChangeOwner:(id)arg1;
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

