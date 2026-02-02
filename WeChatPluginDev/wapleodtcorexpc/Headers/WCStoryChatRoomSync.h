//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCStoryChatRoomSync : NSObject
{
    unsigned int _nextSyncTime;
    NSString *_chatRoomName;
    NSData *_buffer;
}

+ (void)__wcdb_index_21:(void *)arg1;
+ (void)__wcdb_column_constraint_20:(void *)arg1;
+ (id)swift_buffer;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)buffer;
+ (id)swift_nextSyncTime;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)nextSyncTime;
+ (id)swift_chatRoomName;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)chatRoomName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) unsigned int nextSyncTime; // @synthesize nextSyncTime=_nextSyncTime;
@property(retain, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName=_chatRoomName;
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

