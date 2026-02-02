//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CEmoticonPackageWrap : NSObject
{
    NSString *m_packageId;
    NSString *m_packageName;
    unsigned int m_payStatus;
    unsigned int m_downloadStatus;
    unsigned int m_installTime;
    unsigned int m_removeTime;
    NSString *m_iconUrl;
    NSString *m_panelUrl;
    unsigned int m_count;
    NSString *m_designerUin;
    NSString *designerIPSetKey;
    unsigned int ConIntRes2;
    unsigned int ConIntRes3;
    NSString *ConStrRes3;
    unsigned long long _sortAbsoluteIndex;
}

+ (id)packageItemFromSummary:(id)arg1;
+ (void)additionalObjectRelationalMapping:(void *)arg1;
+ (void)__wcdb_index_23:(void *)arg1;
+ (void)__wcdb_index_22:(void *)arg1;
+ (void)__wcdb_column_constraint_21:(void *)arg1;
+ (void)__wcdb_column_constraint_20:(void *)arg1;
+ (void)__wcdb_column_constraint_19:(void *)arg1;
+ (void)__wcdb_column_constraint_18:(void *)arg1;
+ (void)__wcdb_column_constraint_17:(void *)arg1;
+ (void)__wcdb_column_constraint_16:(void *)arg1;
+ (void)__wcdb_column_constraint_15:(void *)arg1;
+ (void)__wcdb_column_constraint_14:(void *)arg1;
+ (id)swift_ConStrRes3;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)ConStrRes3;
+ (id)swift_designerIPSetKey;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)designerIPSetKey;
+ (id)swift_m_designerUin;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)m_designerUin;
+ (id)swift_ConIntRes3;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)ConIntRes3;
+ (id)swift_ConIntRes2;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)ConIntRes2;
+ (id)swift_m_count;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)m_count;
+ (id)swift_m_removeTime;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)m_removeTime;
+ (id)swift_m_installTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)m_installTime;
+ (id)swift_m_downloadStatus;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)m_downloadStatus;
+ (id)swift_m_payStatus;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)m_payStatus;
+ (id)swift_m_panelUrl;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)m_panelUrl;
+ (id)swift_m_iconUrl;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)m_iconUrl;
+ (id)swift_m_packageName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)m_packageName;
+ (id)swift_m_packageId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)m_packageId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long sortAbsoluteIndex; // @synthesize sortAbsoluteIndex=_sortAbsoluteIndex;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3;
@property(retain, nonatomic) NSString *designerIPSetKey; // @synthesize designerIPSetKey;
@property(retain, nonatomic) NSString *m_designerUin; // @synthesize m_designerUin;
@property(nonatomic) unsigned int ConIntRes3; // @synthesize ConIntRes3;
@property(nonatomic) unsigned int ConIntRes2; // @synthesize ConIntRes2;
@property(nonatomic) unsigned int m_count; // @synthesize m_count;
@property(nonatomic) unsigned int m_removeTime; // @synthesize m_removeTime;
@property(nonatomic) unsigned int m_installTime; // @synthesize m_installTime;
@property(nonatomic) unsigned int m_downloadStatus; // @synthesize m_downloadStatus;
@property(nonatomic) unsigned int m_payStatus; // @synthesize m_payStatus;
@property(retain, nonatomic) NSString *m_panelUrl; // @synthesize m_panelUrl;
@property(retain, nonatomic) NSString *m_iconUrl; // @synthesize m_iconUrl;
@property(retain, nonatomic) NSString *m_packageName; // @synthesize m_packageName;
@property(retain, nonatomic) NSString *m_packageId; // @synthesize m_packageId;
- (id)init;
@property(readonly, copy) NSString *description;
- (_Bool)isTusiji;

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

