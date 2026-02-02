//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EdgeComputingSqlConfigModel
{
    unsigned int _reportID;
    unsigned int _reportMethod;
    NSString *_configID;
    NSString *_sql;
    NSString *_sqlURL;
    NSString *_dbPath;
    NSString *_originalJson;
    NSString *_sqlMD5;
}

+ (void)initialize;
+ (void)PBArrayAdd_sqlURL;
+ (void)PBArrayAdd_reportMethod;
+ (void)PBArrayAdd_sqlMD5;
+ (void)PBArrayAdd_originalJson;
+ (void)PBArrayAdd_dbPath;
+ (void)PBArrayAdd_sql;
+ (void)PBArrayAdd_reportID;
+ (void)PBArrayAdd_configID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sqlMD5; // @synthesize sqlMD5=_sqlMD5;
@property(retain, nonatomic) NSString *originalJson; // @synthesize originalJson=_originalJson;
@property(retain, nonatomic) NSString *dbPath; // @synthesize dbPath=_dbPath;
@property(retain, nonatomic) NSString *sqlURL; // @synthesize sqlURL=_sqlURL;
@property(retain, nonatomic) NSString *sql; // @synthesize sql=_sql;
@property(nonatomic) unsigned int reportMethod; // @synthesize reportMethod=_reportMethod;
@property(nonatomic) unsigned int reportID; // @synthesize reportID=_reportID;
@property(retain, nonatomic) NSString *configID; // @synthesize configID=_configID;
- (id)toString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

