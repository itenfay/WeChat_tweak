//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderAdEntryItem : NSObject
{
    int _scene;
    unsigned int _productType;
    unsigned int _posType;
    NSString *_tid;
    unsigned long long _cacheTime;
    NSString *_iconUrl;
    NSString *_recommendReason;
    NSString *_wording;
    NSString *_url;
    unsigned long long _destType;
    NSString *_uxinfo;
    NSString *_rl;
    NSString *_apUrl;
    NSString *_traceId;
    NSString *_adPosId;
    NSString *_aid;
    NSString *_groupId;
    unsigned long long _pt;
    NSString *_reportExtraData;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)__wcdb_column_constraint_19:(void *)arg1;
+ (id)swift_reportExtraData;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)reportExtraData;
+ (id)swift_scene;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)scene;
+ (id)swift_pt;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)pt;
+ (id)swift_posType;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)posType;
+ (id)swift_groupId;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)groupId;
+ (id)swift_aid;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)aid;
+ (id)swift_productType;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)productType;
+ (id)swift_adPosId;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)adPosId;
+ (id)swift_traceId;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)traceId;
+ (id)swift_apUrl;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)apUrl;
+ (id)swift_rl;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)rl;
+ (id)swift_uxinfo;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)uxinfo;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)cacheTime;
+ (id)swift_url;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)url;
+ (id)swift_wording;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)wording;
+ (id)swift_recommendReason;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)recommendReason;
+ (id)swift_iconUrl;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)iconUrl;
+ (id)swift_destType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)destType;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_reportExtraData;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_pt;
+ (void)PBArrayAdd_posType;
+ (void)PBArrayAdd_groupId;
+ (void)PBArrayAdd_aid;
+ (void)PBArrayAdd_productType;
+ (void)PBArrayAdd_adPosId;
+ (void)PBArrayAdd_traceId;
+ (void)PBArrayAdd_apUrl;
+ (void)PBArrayAdd_rl;
+ (void)PBArrayAdd_uxinfo;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_wording;
+ (void)PBArrayAdd_recommendReason;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_destType;
+ (void)PBArrayAdd_tid;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *reportExtraData; // @synthesize reportExtraData=_reportExtraData;
@property(nonatomic) unsigned long long pt; // @synthesize pt=_pt;
@property(nonatomic) unsigned int posType; // @synthesize posType=_posType;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(nonatomic) unsigned int productType; // @synthesize productType=_productType;
@property(copy, nonatomic) NSString *adPosId; // @synthesize adPosId=_adPosId;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(copy, nonatomic) NSString *apUrl; // @synthesize apUrl=_apUrl;
@property(copy, nonatomic) NSString *rl; // @synthesize rl=_rl;
@property(copy, nonatomic) NSString *uxinfo; // @synthesize uxinfo=_uxinfo;
@property(nonatomic) unsigned long long destType; // @synthesize destType=_destType;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(copy, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (_Bool)isEqual:(id)arg1;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

