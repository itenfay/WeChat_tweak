//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, CMessageWrap, NSString;
@protocol MMUIViewControllerDelegate;

@interface ChatRoomInvitationContactProfileLogic : NSObject
{
    CContact *_roomContact;
    id <MMUIViewControllerDelegate> _delegate;
    CMessageWrap *_currentInvitationMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *currentInvitationMsg; // @synthesize currentInvitationMsg=_currentInvitationMsg;
@property(nonatomic) __weak id <MMUIViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CContact *roomContact; // @synthesize roomContact=_roomContact;
- (void)onCheckDisableAllOperation:(id)arg1 Disable:(_Bool *)arg2;
- (id)updateContactsAndGetInviterContactForInvitationMsg:(id)arg1;
- (void)openContactProfile:(id)arg1 fromInvitationMsg:(id)arg2;
- (id)initWithRoomContact:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

