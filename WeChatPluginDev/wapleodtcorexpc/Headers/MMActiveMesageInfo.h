//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMActiveMesageInfo : NSObject
{
    unsigned int _localID;
    unsigned int _activeTime;
    NSString *_sessionName;
    unsigned long long _infoType;
}

+ (void)__wcdb_index_4:(void *)arg1;
+ (id)swift_activeTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)activeTime;
+ (id)swift_infoType;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)infoType;
+ (id)swift_localID;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)localID;
+ (id)swift_sessionName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)sessionName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int activeTime; // @synthesize activeTime=_activeTime;
@property(nonatomic) unsigned long long infoType; // @synthesize infoType=_infoType;
@property(nonatomic) unsigned int localID; // @synthesize localID=_localID;
@property(copy, nonatomic) NSString *sessionName; // @synthesize sessionName=_sessionName;
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

