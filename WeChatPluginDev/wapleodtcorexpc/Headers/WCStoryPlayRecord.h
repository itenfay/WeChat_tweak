//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCStoryPlayRecord : NSObject
{
    unsigned int _playCount;
    unsigned int _lastPlayTime;
    unsigned int _lastPlaySecne;
    unsigned int _bHitPreload;
    NSString *_tid;
    NSString *_userName;
}

+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_index_7:(void *)arg1;
+ (void)__wcdb_column_constraint_6:(void *)arg1;
+ (id)swift_lastPlaySecne;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)lastPlaySecne;
+ (id)swift_bHitPreload;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)bHitPreload;
+ (id)swift_lastPlayTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)lastPlayTime;
+ (id)swift_playCount;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)playCount;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)userName;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int bHitPreload; // @synthesize bHitPreload=_bHitPreload;
@property(nonatomic) unsigned int lastPlaySecne; // @synthesize lastPlaySecne=_lastPlaySecne;
@property(nonatomic) unsigned int lastPlayTime; // @synthesize lastPlayTime=_lastPlayTime;
@property(nonatomic) unsigned int playCount; // @synthesize playCount=_playCount;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
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

