//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBContactSendMsgTicket : NSObject
{
    NSString *_userName;
    NSString *_sendMsgTicket;
}

+ (void)__wcdb_column_constraint_29:(void *)arg1;
+ (void)__wcdb_column_constraint_28:(void *)arg1;
+ (id)swift_sendMsgTicket;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (const void *)sendMsgTicket;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (const void *)userName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sendMsgTicket; // @synthesize sendMsgTicket=_sendMsgTicket;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;

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

