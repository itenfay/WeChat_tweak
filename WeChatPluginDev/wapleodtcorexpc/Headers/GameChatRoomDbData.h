//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GameChatRoomDbData : NSObject
{
    NSString *_chatRoomUserName;
    unsigned long long _lastMaxExposureSeq;
}

+ (void)__wcdb_column_constraint_21:(void *)arg1;
+ (id)swift_lastMaxExposureSeq;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (const void *)lastMaxExposureSeq;
+ (id)swift_chatRoomUserName;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)chatRoomUserName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastMaxExposureSeq; // @synthesize lastMaxExposureSeq=_lastMaxExposureSeq;
@property(retain, nonatomic) NSString *chatRoomUserName; // @synthesize chatRoomUserName=_chatRoomUserName;

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

