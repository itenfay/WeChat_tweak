//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SafeModeReportData : NSObject
{
    _Bool _isKVReport;
    _Bool _isReportNow;
    _Bool _isKeyLog;
    int _ID;
    int _key;
    int _value;
    NSString *_ext;
}

+ (void)initialize;
+ (void)PBArrayAdd_isKeyLog;
+ (void)PBArrayAdd_isReportNow;
+ (void)PBArrayAdd_ext;
+ (void)PBArrayAdd_isKVReport;
+ (void)PBArrayAdd_value;
+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_ID;
- (void).cxx_destruct;
@property(nonatomic) _Bool isKeyLog; // @synthesize isKeyLog=_isKeyLog;
@property(nonatomic) _Bool isReportNow; // @synthesize isReportNow=_isReportNow;
@property(retain, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(nonatomic) _Bool isKVReport; // @synthesize isKVReport=_isKVReport;
@property(nonatomic) int value; // @synthesize value=_value;
@property(nonatomic) int key; // @synthesize key=_key;
@property(nonatomic) int ID; // @synthesize ID=_ID;
- (id)initWithID:(int)arg1 ext:(id)arg2 isReportNow:(_Bool)arg3 isKeyLog:(_Bool)arg4;
- (id)initWithID:(int)arg1 key:(int)arg2 value:(int)arg3;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

