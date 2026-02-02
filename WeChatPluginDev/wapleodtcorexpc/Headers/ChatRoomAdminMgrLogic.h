//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, NSArray;
@protocol ChatRoomAdminMgrLogicDelegate;

@interface ChatRoomAdminMgrLogic : NSObject
{
    id <ChatRoomAdminMgrLogicDelegate> _m_delegate;
    CContact *_m_chatRoomContact;
    NSArray *_m_arrMemberList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *m_arrMemberList; // @synthesize m_arrMemberList=_m_arrMemberList;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact=_m_chatRoomContact;
@property(nonatomic) __weak id <ChatRoomAdminMgrLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)reLoadData;
- (id)init;

@end

