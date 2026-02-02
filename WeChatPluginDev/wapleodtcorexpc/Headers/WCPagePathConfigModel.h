//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WCPagePathConfigModel
{
    _Bool _isNeedReportSingle;
    unsigned int _prePageCount;
    NSString *_sid;
    NSString *_pagePathId;
    unsigned long long _type;
    NSMutableArray *_pagePathUnits;
    NSString *_logId;
    NSMutableArray *_vagueBusinessParams;
    NSMutableArray *_vagueViewOperations;
    NSString *_originalJson;
    NSMutableDictionary *_viewOperationsDicForKey;
    NSMutableDictionary *_viewOperationsDicForViewID;
}

+ (void)initialize;
+ (void)PBArrayAdd_vagueViewOperations;
+ (void)PBArrayAdd_vagueBusinessParams;
+ (void)PBArrayAdd_prePageCount;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_originalJson;
+ (void)PBArrayAdd_isNeedReportSingle;
+ (void)PBArrayAdd_logId;
+ (void)PBArrayAdd_pagePathUnits;
+ (void)PBArrayAdd_pagePathId;
+ (void)PBArrayAdd_sid;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *viewOperationsDicForViewID; // @synthesize viewOperationsDicForViewID=_viewOperationsDicForViewID;
@property(retain) NSMutableDictionary *viewOperationsDicForKey; // @synthesize viewOperationsDicForKey=_viewOperationsDicForKey;
@property(retain, nonatomic) NSString *originalJson; // @synthesize originalJson=_originalJson;
@property(nonatomic) _Bool isNeedReportSingle; // @synthesize isNeedReportSingle=_isNeedReportSingle;
@property(retain, nonatomic) NSMutableArray *vagueViewOperations; // @synthesize vagueViewOperations=_vagueViewOperations;
@property(retain, nonatomic) NSMutableArray *vagueBusinessParams; // @synthesize vagueBusinessParams=_vagueBusinessParams;
@property(retain, nonatomic) NSString *logId; // @synthesize logId=_logId;
@property(nonatomic) unsigned int prePageCount; // @synthesize prePageCount=_prePageCount;
@property(retain, nonatomic) NSMutableArray *pagePathUnits; // @synthesize pagePathUnits=_pagePathUnits;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *pagePathId; // @synthesize pagePathId=_pagePathId;
@property(retain, nonatomic) NSString *sid; // @synthesize sid=_sid;
- (id)toString;
- (void)initCacheDictionary;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

