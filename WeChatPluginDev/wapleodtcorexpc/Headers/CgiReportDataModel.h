//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface CgiReportDataModel
{
    unsigned int _businessId;
    unsigned int _reqCount;
    NSMutableArray *_itemDataList;
    NSString *_collectKey;
    unsigned long long _collectStartTimeMs;
    NSString *_dataUUID;
    unsigned long long _firstReqTimeMs;
    unsigned long long _lastReqTimeMs;
}

+ (id)simpleLogForData:(id)arg1;
+ (id)createItemData:(unsigned int)arg1 andItemType:(unsigned int)arg2 andItemId:(id)arg3 andCurrPage:(id)arg4 andSourcePage:(id)arg5 andRefPage:(id)arg6 andSdkSessionId:(id)arg7 andEventId:(id)arg8 andCliTimeMs:(unsigned long long)arg9 andData:(id)arg10;
+ (void)initialize;
+ (void)PBArrayAdd_reqCount;
+ (void)PBArrayAdd_lastReqTimeMs;
+ (void)PBArrayAdd_firstReqTimeMs;
+ (void)PBArrayAdd_dataUUID;
+ (void)PBArrayAdd_collectStartTimeMs;
+ (void)PBArrayAdd_collectKey;
+ (void)PBArrayAdd_itemDataList;
+ (void)PBArrayAdd_businessId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int reqCount; // @synthesize reqCount=_reqCount;
@property(nonatomic) unsigned long long lastReqTimeMs; // @synthesize lastReqTimeMs=_lastReqTimeMs;
@property(nonatomic) unsigned long long firstReqTimeMs; // @synthesize firstReqTimeMs=_firstReqTimeMs;
@property(retain, nonatomic) NSString *dataUUID; // @synthesize dataUUID=_dataUUID;
@property(nonatomic) unsigned long long collectStartTimeMs; // @synthesize collectStartTimeMs=_collectStartTimeMs;
@property(retain, nonatomic) NSString *collectKey; // @synthesize collectKey=_collectKey;
@property(retain, nonatomic) NSMutableArray *itemDataList; // @synthesize itemDataList=_itemDataList;
@property(nonatomic) unsigned int businessId; // @synthesize businessId=_businessId;
- (unsigned long long)calcPenaltyTimeMs;
- (_Bool)canSend:(unsigned long long)arg1;
- (long long)compare:(id)arg1;
- (void)noteReqFail;
- (void)noteStartReq;
- (id)simpleLog;
- (id)initWithBusinessId:(unsigned int)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

