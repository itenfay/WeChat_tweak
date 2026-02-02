//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class DBContactChatRoomDetail, NSString;

@interface DBContactChatRoom : NSObject
{
    unsigned int _chatStatus;
    unsigned int _chatRoomMaxCount;
    unsigned int _chatRoomVersion;
    unsigned int _chatRoomAccessType;
    unsigned int _chatRoomLocalSendUpgradeType;
    unsigned int _inChatRoomStatus;
    NSString *_chatRoomMember;
    NSString *_owner;
    NSString *_chatRoomData;
    DBContactChatRoomDetail *_chatRoomDetail;
    NSString *_chatRoomAdmin;
    unsigned long long _chatRoomBusinessType;
    NSString *_chatRoomSpecialAttentionMem;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_inChatRoomStatus;
+ (void)PBArrayAdd_chatRoomSpecialAttentionMem;
+ (void)PBArrayAdd_chatRoomLocalSendUpgradeType;
+ (void)PBArrayAdd_chatRoomBusinessType;
+ (void)PBArrayAdd_chatRoomAdmin;
+ (void)PBArrayAdd_chatRoomAccessType;
+ (void)PBArrayAdd_chatRoomDetail;
+ (void)PBArrayAdd_chatRoomData;
+ (void)PBArrayAdd_chatRoomVersion;
+ (void)PBArrayAdd_chatRoomMaxCount;
+ (void)PBArrayAdd_chatStatus;
+ (void)PBArrayAdd_owner;
+ (void)PBArrayAdd_chatRoomMember;
- (void).cxx_destruct;
@property(nonatomic) unsigned int inChatRoomStatus; // @synthesize inChatRoomStatus=_inChatRoomStatus;
@property(retain, nonatomic) NSString *chatRoomSpecialAttentionMem; // @synthesize chatRoomSpecialAttentionMem=_chatRoomSpecialAttentionMem;
@property(nonatomic) unsigned int chatRoomLocalSendUpgradeType; // @synthesize chatRoomLocalSendUpgradeType=_chatRoomLocalSendUpgradeType;
@property(nonatomic) unsigned long long chatRoomBusinessType; // @synthesize chatRoomBusinessType=_chatRoomBusinessType;
@property(retain, nonatomic) NSString *chatRoomAdmin; // @synthesize chatRoomAdmin=_chatRoomAdmin;
@property(nonatomic) unsigned int chatRoomAccessType; // @synthesize chatRoomAccessType=_chatRoomAccessType;
@property(retain, nonatomic) DBContactChatRoomDetail *chatRoomDetail; // @synthesize chatRoomDetail=_chatRoomDetail;
@property(retain, nonatomic) NSString *chatRoomData; // @synthesize chatRoomData=_chatRoomData;
@property(nonatomic) unsigned int chatRoomVersion; // @synthesize chatRoomVersion=_chatRoomVersion;
@property(nonatomic) unsigned int chatRoomMaxCount; // @synthesize chatRoomMaxCount=_chatRoomMaxCount;
@property(nonatomic) unsigned int chatStatus; // @synthesize chatStatus=_chatStatus;
@property(retain, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSString *chatRoomMember; // @synthesize chatRoomMember=_chatRoomMember;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

