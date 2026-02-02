//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, JSApiSelectContactsViewController, JSApiSelectSessionViewController;

@interface WAJSEventHandler_chooseWeChatContact
{
    CContact *m_oSelectedContact;
    _Bool _isSingleConatct;
    _Bool _isChatRoom;
    JSApiSelectSessionViewController *_oSelectSessionViewController;
    JSApiSelectContactsViewController *_oSelectContactViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) JSApiSelectContactsViewController *oSelectContactViewController; // @synthesize oSelectContactViewController=_oSelectContactViewController;
@property(retain, nonatomic) JSApiSelectSessionViewController *oSelectSessionViewController; // @synthesize oSelectSessionViewController=_oSelectSessionViewController;
@property(nonatomic) _Bool isChatRoom; // @synthesize isChatRoom=_isChatRoom;
@property(nonatomic) _Bool isSingleConatct; // @synthesize isSingleConatct=_isSingleConatct;
- (void)OnJSApiSelectSessionViewControllerNewSession;
- (void)OnJSApiSelectSessionViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (_Bool)OnJSApiSelectSessionViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectSessionViewControllerBack;
- (void)OnJSApiSelectContactsViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (_Bool)OnJSApiSelectContactsViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectContactsViewControllerBack;
- (void)dealloc;
- (_Bool)isShowMobileName:(id)arg1 mobileName:(id)arg2;
- (id)getRoomName:(id)arg1;
- (void)confirmEndJSEvent;
- (void)cancelEndJSEnvent;
- (void)handleJSEvent:(id)arg1;

@end

