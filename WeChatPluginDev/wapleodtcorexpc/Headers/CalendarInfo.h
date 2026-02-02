//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface CalendarInfo
{
    unsigned int _ds;
    unsigned int _exposeCount;
    unsigned int _tipsIdExposeCount;
    unsigned int _enterCount;
    unsigned int _enterWithRedDotCount;
    unsigned int _dropRedDotCount;
    unsigned int _deepReadCount;
    unsigned long long _firstExposeTimeMs;
    NSString *_lastTipsId;
    unsigned long long _totalStayTimeMs;
    NSString *_stayTimeSecList;
    NSString *_finderVvList;
}

+ (void)initialize;
+ (void)PBArrayAdd_finderVvList;
+ (void)PBArrayAdd_stayTimeSecList;
+ (void)PBArrayAdd_deepReadCount;
+ (void)PBArrayAdd_dropRedDotCount;
+ (void)PBArrayAdd_totalStayTimeMs;
+ (void)PBArrayAdd_enterWithRedDotCount;
+ (void)PBArrayAdd_enterCount;
+ (void)PBArrayAdd_tipsIdExposeCount;
+ (void)PBArrayAdd_lastTipsId;
+ (void)PBArrayAdd_exposeCount;
+ (void)PBArrayAdd_firstExposeTimeMs;
+ (void)PBArrayAdd_ds;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *finderVvList; // @synthesize finderVvList=_finderVvList;
@property(retain, nonatomic) NSString *stayTimeSecList; // @synthesize stayTimeSecList=_stayTimeSecList;
@property(nonatomic) unsigned int deepReadCount; // @synthesize deepReadCount=_deepReadCount;
@property(nonatomic) unsigned int dropRedDotCount; // @synthesize dropRedDotCount=_dropRedDotCount;
@property(nonatomic) unsigned long long totalStayTimeMs; // @synthesize totalStayTimeMs=_totalStayTimeMs;
@property(nonatomic) unsigned int enterWithRedDotCount; // @synthesize enterWithRedDotCount=_enterWithRedDotCount;
@property(nonatomic) unsigned int enterCount; // @synthesize enterCount=_enterCount;
@property(nonatomic) unsigned int tipsIdExposeCount; // @synthesize tipsIdExposeCount=_tipsIdExposeCount;
@property(retain, nonatomic) NSString *lastTipsId; // @synthesize lastTipsId=_lastTipsId;
@property(nonatomic) unsigned int exposeCount; // @synthesize exposeCount=_exposeCount;
@property(nonatomic) unsigned long long firstExposeTimeMs; // @synthesize firstExposeTimeMs=_firstExposeTimeMs;
@property(nonatomic) unsigned int ds; // @synthesize ds=_ds;
@property(readonly, copy) NSString *description;
- (void)reset;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

