//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLiveMsgRecord : NSObject
{
    unsigned int _msgLocalID;
    unsigned int _createTime;
    NSString *_localClientMsgId;
    NSString *_sessionId;
}

+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_msgLocalID;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)msgLocalID;
+ (id)swift_sessionId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)sessionId;
+ (id)swift_localClientMsgId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)localClientMsgId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int msgLocalID; // @synthesize msgLocalID=_msgLocalID;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *localClientMsgId; // @synthesize localClientMsgId=_localClientMsgId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

