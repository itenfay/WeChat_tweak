//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BindFinderClubInfo, ChatroomBindInfo, NSString, PrepareFinder;

@interface WCFinderClubChatroomMapInfo : NSObject
{
    _Bool _isChatroomOwner;
    unsigned int _queryInterval;
    NSString *_chatroomId;
    NSString *_finderUsername;
    unsigned long long _permissionFlag;
    unsigned long long _cacheTime;
    ChatroomBindInfo *_accountBindInfo;
    BindFinderClubInfo *_bindFinderClubInfo;
    PrepareFinder *_finderPrepare;
}

+ (void)__wcdb_index_9:(void *)arg1;
+ (void)__wcdb_column_constraint_8:(void *)arg1;
+ (id)swift_isChatroomOwner;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)isChatroomOwner;
+ (id)swift_bindFinderClubInfo;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)bindFinderClubInfo;
+ (id)swift_accountBindInfo;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)accountBindInfo;
+ (id)swift_permissionFlag;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)permissionFlag;
+ (id)swift_queryInterval;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)queryInterval;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)cacheTime;
+ (id)swift_finderUsername;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)finderUsername;
+ (id)swift_chatroomId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)chatroomId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_isChatroomOwner;
+ (void)PBArrayAdd_bindFinderClubInfo;
+ (void)PBArrayAdd_accountBindInfo;
+ (void)PBArrayAdd_permissionFlag;
+ (void)PBArrayAdd_queryInterval;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_finderUsername;
+ (void)PBArrayAdd_chatroomId;
- (void).cxx_destruct;
@property(retain, nonatomic) PrepareFinder *finderPrepare; // @synthesize finderPrepare=_finderPrepare;
@property(retain, nonatomic) BindFinderClubInfo *bindFinderClubInfo; // @synthesize bindFinderClubInfo=_bindFinderClubInfo;
@property(retain, nonatomic) ChatroomBindInfo *accountBindInfo; // @synthesize accountBindInfo=_accountBindInfo;
@property(nonatomic) unsigned int queryInterval; // @synthesize queryInterval=_queryInterval;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
@property(nonatomic) unsigned long long permissionFlag; // @synthesize permissionFlag=_permissionFlag;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) _Bool isChatroomOwner; // @synthesize isChatroomOwner=_isChatroomOwner;
@property(copy, nonatomic) NSString *chatroomId; // @synthesize chatroomId=_chatroomId;
- (_Bool)hasClubContact;
- (_Bool)shouldShowClubEntrance;
- (unsigned long long)nextCheckTime;
- (id)initWithChatroomId:(id)arg1 finderUsername:(id)arg2 permissionFlag:(unsigned long long)arg3 queryInterval:(unsigned int)arg4 accountBindInfo:(id)arg5;
- (id)getPBPropertyTable;

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

