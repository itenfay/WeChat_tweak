//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString;

@interface WCFinderGroupCreateTipsViewController
{
    CContact *_chatRoomContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *chatRoomContact; // @synthesize chatRoomContact=_chatRoomContact;
- (void)createUserFinished:(id)arg1;
- (void)createUserClosed;
- (void)clickBindMasterAction;
- (void)createGroupContact;
- (id)navigationBarBackgroundColor;
- (id)subTipsViewWithTitle:(id)arg1 desc:(id)arg2;
- (void)viewDidLoad;
- (id)initWithChatRoomContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

