//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderAdPreMovieAdInfo, NSDictionary, NSMutableArray, NSString, WCFinderJumpInfoArray, WCFinderJumpInfoIdMutableArray;

@interface WCFinderJumpInfoContainer : NSObject
{
    int _scene;
    NSMutableArray *_feedJumpInfoArray;
    NSString *_tid;
    unsigned long long _cacheTime;
    WCFinderJumpInfoIdMutableArray *_feedJumpInfoIdArray;
    WCFinderJumpInfoArray *_adJumpInfoArray;
    FinderAdPreMovieAdInfo *_premovieAdInfo;
    NSDictionary *_jumpInfoBusinessPriorityDict;
}

+ (_Bool)arrayIsEqual:(id)arg1 toArray:(id)arg2;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (id)checkCnyButtonStatus:(id)arg1;
+ (id)feedPosArray;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (id)swift_premovieAdInfo;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)premovieAdInfo;
+ (id)swift_adJumpInfoArray;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)adJumpInfoArray;
+ (id)swift_feedJumpInfoIdArray;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)feedJumpInfoIdArray;
+ (id)swift_scene;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)scene;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)cacheTime;
+ (id)swift_tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)tid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_premovieAdInfo;
+ (void)PBArrayAdd_adJumpInfoArray;
+ (void)PBArrayAdd_feedJumpInfoIdArray;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_tid;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *jumpInfoBusinessPriorityDict; // @synthesize jumpInfoBusinessPriorityDict=_jumpInfoBusinessPriorityDict;
@property(retain, nonatomic) FinderAdPreMovieAdInfo *premovieAdInfo; // @synthesize premovieAdInfo=_premovieAdInfo;
@property(retain, nonatomic) WCFinderJumpInfoArray *adJumpInfoArray; // @synthesize adJumpInfoArray=_adJumpInfoArray;
@property(retain, nonatomic) WCFinderJumpInfoIdMutableArray *feedJumpInfoIdArray; // @synthesize feedJumpInfoIdArray=_feedJumpInfoIdArray;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (_Bool)hasMusicJumpInfo;
- (id)getJumpInfoArrayByBusinessType:(int)arg1;
- (id)getTopPriorityJumpInfos:(id)arg1;
- (id)getLiveJumpInfoArrayOnTimeline;
- (id)getJumpInfoArrayOnTimeline;
- (id)getAvatarJumpInfo;
- (id)getRedPacketCoverID;
- (_Bool)haveMembershipZoneJumpInfo;
- (_Bool)haveRedPacketJumpInfo;
- (void)syncLBSFavState;
- (id)getLBSJumpInfo;
- (id)getRedPacketJumpInfo;
- (id)getPostStateJumpInfo;
- (id)jumpInfoArrayOnShowPosition:(int)arg1;
- (void)appendWithJumpInfoArray:(id)arg1;
- (void)appendOrReplaceAdJumpInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)jumpInfoKvDictOnShowPosition:(int)arg1;
- (id)interactiveReportString;
- (id)JumpInfoArrayForReport;
- (id)clientUdfKV;
- (id)kvDictWithJumpInfo:(id)arg1;
- (_Bool)removeAdJumpInfoWithBusinessType:(int)arg1;
- (void)removeJumpInfo:(id)arg1;
- (void)startMiniAppPreload;
- (id)JumpInfoArrayFromAsync;
@property(retain, nonatomic) NSMutableArray *feedJumpInfoArray; // @synthesize feedJumpInfoArray=_feedJumpInfoArray;
- (_Bool)hasJumpInfoShowOnComment;
- (_Bool)isValid;
- (id)initWithTid:(id)arg1;
- (id)archivedWCTValue;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

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

