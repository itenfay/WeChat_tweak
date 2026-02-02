//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderMsgSessionStatus : NSObject
{
    _Bool _rejectMsgStatus;
    _Bool _isInNormalSession;
    _Bool _canSendAttachment;
    _Bool _disableSendmsgNeedFollow;
    unsigned int _myAccountType;
    NSString *_sessionId;
    NSString *_realChatUserName;
    NSString *_selfChatUserName;
}

+ (void)__wcdb_column_constraint_8:(void *)arg1;
+ (id)swift_disableSendmsgNeedFollow;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)disableSendmsgNeedFollow;
+ (id)swift_selfChatUserName;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)selfChatUserName;
+ (id)swift_canSendAttachment;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)canSendAttachment;
+ (id)swift_isInNormalSession;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)isInNormalSession;
+ (id)swift_rejectMsgStatus;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)rejectMsgStatus;
+ (id)swift_realChatUserName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)realChatUserName;
+ (id)swift_myAccountType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)myAccountType;
+ (id)swift_sessionId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)sessionId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool disableSendmsgNeedFollow; // @synthesize disableSendmsgNeedFollow=_disableSendmsgNeedFollow;
@property(nonatomic) _Bool canSendAttachment; // @synthesize canSendAttachment=_canSendAttachment;
@property(nonatomic) _Bool isInNormalSession; // @synthesize isInNormalSession=_isInNormalSession;
@property(nonatomic) _Bool rejectMsgStatus; // @synthesize rejectMsgStatus=_rejectMsgStatus;
@property(retain, nonatomic) NSString *selfChatUserName; // @synthesize selfChatUserName=_selfChatUserName;
@property(retain, nonatomic) NSString *realChatUserName; // @synthesize realChatUserName=_realChatUserName;
@property(nonatomic) unsigned int myAccountType; // @synthesize myAccountType=_myAccountType;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (_Bool)isValid;
- (id)init;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

