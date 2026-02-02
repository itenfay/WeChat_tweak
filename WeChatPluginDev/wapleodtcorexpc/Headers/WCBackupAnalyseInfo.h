//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCBackupAnalyseInfo : NSObject
{
    unsigned long long _infoType;
    double _occurTime;
    NSString *_deviceName;
    NSString *_infoString;
}

+ (id)swift_infoString;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)infoString;
+ (id)swift_deviceName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)deviceName;
+ (id)swift_occurTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)occurTime;
+ (id)swift_infoType;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)infoType;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *infoString; // @synthesize infoString=_infoString;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(nonatomic) double occurTime; // @synthesize occurTime=_occurTime;
@property(nonatomic) unsigned long long infoType; // @synthesize infoType=_infoType;
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

