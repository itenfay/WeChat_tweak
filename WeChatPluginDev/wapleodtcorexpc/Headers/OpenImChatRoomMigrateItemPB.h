//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OpenImChatRoomMigrateItemPB : NSObject
{
    _Bool _m_bIsHadMigrated;
    _Bool _m_bIsSendInsertWarningSystemMessage;
    NSString *_m_nsOpenIMChatRoomUserName;
    NSString *_m_nsAssociateChatRoomUserName;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_bIsSendInsertWarningSystemMessage;
+ (void)PBArrayAdd_m_bIsHadMigrated;
+ (void)PBArrayAdd_m_nsAssociateChatRoomUserName;
+ (void)PBArrayAdd_m_nsOpenIMChatRoomUserName;
- (void).cxx_destruct;
@property(nonatomic) _Bool m_bIsSendInsertWarningSystemMessage; // @synthesize m_bIsSendInsertWarningSystemMessage=_m_bIsSendInsertWarningSystemMessage;
@property(nonatomic) _Bool m_bIsHadMigrated; // @synthesize m_bIsHadMigrated=_m_bIsHadMigrated;
@property(retain, nonatomic) NSString *m_nsAssociateChatRoomUserName; // @synthesize m_nsAssociateChatRoomUserName=_m_nsAssociateChatRoomUserName;
@property(retain, nonatomic) NSString *m_nsOpenIMChatRoomUserName; // @synthesize m_nsOpenIMChatRoomUserName=_m_nsOpenIMChatRoomUserName;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

