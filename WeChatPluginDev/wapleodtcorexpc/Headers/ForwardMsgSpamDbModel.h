//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ForwardMsgSpamDbModel : NSObject
{
    _Bool _open;
    NSString *_msgId;
    NSString *_username;
    unsigned long long _scene;
}

+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (id)swift_open;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)open;
+ (id)swift_scene;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)scene;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)username;
+ (id)swift_msgId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)msgId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool open; // @synthesize open=_open;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
- (id)initWithUsername:(id)arg1 andScene:(unsigned long long)arg2 andMsgId:(id)arg3 andOpenStatus:(_Bool)arg4;

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

