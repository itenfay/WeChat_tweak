//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, ChatRoomInvitationWrap, NSArray, NSString;

@interface ChatRoomInvitationDetail : NSObject
{
    NSArray *_invitationReasonList;
    NSString *_content;
    NSString *_roomUsrName;
    CMessageWrap *_msgWrap;
    ChatRoomInvitationWrap *_invitationWrap;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_roomUsrName;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_invitationReasonList;
- (void).cxx_destruct;
@property(nonatomic) __weak ChatRoomInvitationWrap *invitationWrap; // @synthesize invitationWrap=_invitationWrap;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(retain, nonatomic) NSString *roomUsrName; // @synthesize roomUsrName=_roomUsrName;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSArray *invitationReasonList; // @synthesize invitationReasonList=_invitationReasonList;
- (long long)getSvrId;
@property(readonly, copy) NSString *description;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

