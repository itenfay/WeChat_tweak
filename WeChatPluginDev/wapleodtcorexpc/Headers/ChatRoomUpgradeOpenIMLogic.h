//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact;
@protocol ChatRoomUpgradeOpenIMLogicDelegate;

@interface ChatRoomUpgradeOpenIMLogic : NSObject
{
    unsigned int _m_scene;
    id <ChatRoomUpgradeOpenIMLogicDelegate> m_delegate;
    CContact *_m_chatRoomContact;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_scene; // @synthesize m_scene=_m_scene;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact=_m_chatRoomContact;
@property(nonatomic) __weak id <ChatRoomUpgradeOpenIMLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnGetUpgradeAssociateChatRoom:(id)arg1 withTicket:(id)arg2 withResult:(unsigned int)arg3 errorMsg:(id)arg4 withResp:(id)arg5;
- (void)openChatRoomUpgradeOpenIMViewControllerWithResp:(id)arg1;
- (void)start;

@end

