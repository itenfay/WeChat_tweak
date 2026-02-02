//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface DataReportMMDataReportRouter : NSObject
{
    NSMutableArray *m_logIdBlackList;
    unsigned long long m_reportStrMaxLimit;
}

+ (id)changeMutableObject:(id)arg1;
+ (_Bool)readParams:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)removeParams:(id)arg1 value:(id)arg2;
+ (id)getMaxLengthParam:(id)arg1;
+ (void)removeMaxLengthParams:(id)arg1;
+ (void)removeSamePageParams:(id)arg1;
- (void).cxx_destruct;
- (void)onRealTimeKVReportFailedWithWrap:(id)arg1;
- (void)onRealTimeKVReportSucceedWithWrap:(id)arg1;
- (id)toReportStr:(id)arg1;
- (void)route:(id)arg1 reportStr:(id)arg2 routeRule:(id)arg3;
- (unsigned long long)routeType;
- (_Bool)onDataReport:(id)arg1 time:(unsigned long long)arg2 params:(id)arg3 routeRule:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

