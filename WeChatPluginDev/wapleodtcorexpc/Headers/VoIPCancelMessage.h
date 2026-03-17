//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface VoIPCancelMessage : NSObject
{
    unsigned long long m_iVoipRoomid;
    _Bool m_bFromNewSync;
}

+ (void)__wcdb_column_constraint_2:(void *)arg1;
+ (id)swift_m_bFromNewSync;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)m_bFromNewSync;
+ (id)swift_m_iVoipRoomid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)m_iVoipRoomid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
@property(nonatomic) _Bool m_bFromNewSync; // @synthesize m_bFromNewSync;
@property(nonatomic) unsigned long long m_iVoipRoomid; // @synthesize m_iVoipRoomid;

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

