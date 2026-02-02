//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface DataReportEntityOperator : NSObject
{
}

+ (void)setBoolViewInnerProperty:(id)arg1 key:(id)arg2 value:(_Bool)arg3;
+ (_Bool)getBoolViewInnerProperty:(id)arg1 key:(id)arg2 defValue:(_Bool)arg3;
+ (void)setDoubleViewInnerProperty:(id)arg1 key:(id)arg2 value:(double)arg3;
+ (double)getDoubleViewInnerProperty:(id)arg1 key:(id)arg2 defValue:(double)arg3;
+ (void)setLongViewInnerProperty:(id)arg1 key:(id)arg2 value:(long long)arg3;
+ (long long)getLongViewInnerProperty:(id)arg1 key:(id)arg2 defValue:(long long)arg3;
+ (void)setStringViewInnerProperty:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)getStringViewInnerProperty:(id)arg1 key:(id)arg2 defValue:(id)arg3;
+ (void)putViewInnerProperty:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)getViewInnerProperty:(id)arg1 key:(id)arg2 defValue:(id)arg3;
+ (void)setBoolPageInnerProperty:(id)arg1 key:(id)arg2 value:(_Bool)arg3;
+ (_Bool)getBoolPageInnerProperty:(id)arg1 key:(id)arg2 defValue:(_Bool)arg3;
+ (void)setDoublePageInnerProperty:(id)arg1 key:(id)arg2 value:(double)arg3;
+ (double)getDoublePageInnerProperty:(id)arg1 key:(id)arg2 defValue:(double)arg3;
+ (void)setLongPageInnerProperty:(id)arg1 key:(id)arg2 value:(long long)arg3;
+ (long long)getLongPageInnerProperty:(id)arg1 key:(id)arg2 defValue:(long long)arg3;
+ (void)setStringPageInnerProperty:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)getStringPageInnerProperty:(id)arg1 key:(id)arg2 defValue:(id)arg3;
+ (void)putPageInnerProperty:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)getPageInnerProperty:(id)arg1 key:(id)arg2 defValue:(id)arg3;
+ (double)getViewExposeMinRate:(id)arg1;
+ (void)setViewExposeMinRate:(id)arg1 rate:(double)arg2;
+ (unsigned long long)getViewExposeMinTime:(id)arg1;
+ (void)setViewExposeMinTime:(id)arg1 timeMills:(unsigned long long)arg2;
+ (void)updateViewEventCount:(id)arg1 eventId:(id)arg2;
+ (id)getReportRouteRules:(id)arg1 reportPolicy:(unsigned long long)arg2;
+ (id)getReportRouteRules:(id)arg1 eventId:(id)arg2;
+ (id)getEventParam:(id)arg1 eventId:(id)arg2;
+ (void)removeEventParams:(id)arg1;
+ (void)removeEventParam:(id)arg1 eventId:(id)arg2 key:(id)arg3;
+ (void)setEventParams:(id)arg1 eventId:(id)arg2 params:(id)arg3;
+ (void)setEventParam:(id)arg1 eventId:(id)arg2 key:(id)arg3 value:(id)arg4;
+ (void)setEventCallback:(id)arg1 reportPolicy:(unsigned long long)arg2 callbackBlock:(CDUnknownBlockType)arg3 key:(id)arg4;
+ (void)setObjectEventCallback:(id)arg1 reportPolicy:(unsigned long long)arg2 callbackBlock:(CDUnknownBlockType)arg3 key:(id)arg4;
+ (void)setPageEventCallback:(id)arg1 reportPolicy:(unsigned long long)arg2 callbackBlock:(CDUnknownBlockType)arg3 key:(id)arg4;
+ (void)setViewEventCallback:(id)arg1 reportPolicy:(unsigned long long)arg2 callbackBlock:(CDUnknownBlockType)arg3 key:(id)arg4;
+ (id)getParams:(id)arg1;
+ (void)resetParams:(id)arg1;
+ (void)removeParams:(id)arg1;
+ (void)removeParam:(id)arg1 key:(id)arg2;
+ (void)setParams:(id)arg1 params:(id)arg2;
+ (void)setParam:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (unsigned long long)getReportInterval:(id)arg1 eventId:(id)arg2;
+ (void)setReportInterval:(id)arg1 reportInterval:(unsigned long long)arg2 eventId:(id)arg3;
+ (unsigned long long)getLastReportTime:(id)arg1 eventId:(id)arg2;
+ (void)setLastReportTime:(id)arg1 lastReportTime:(unsigned long long)arg2 eventId:(id)arg3;
+ (id)getDynamicParams:(id)arg1 eventId:(id)arg2;
+ (CDUnknownBlockType)getDynamicParamsBlock:(id)arg1 key:(id)arg2;
+ (id)getDynamicParamsBlocks:(id)arg1;
+ (void)removeDynamicParamsBlock:(id)arg1 key:(id)arg2;
+ (void)setDynamicParamsBlock:(id)arg1 block:(CDUnknownBlockType)arg2 key:(id)arg3;
+ (unsigned long long)getReportPolicy:(id)arg1;
+ (void)setReportPolicy:(id)arg1 reportPolicy:(unsigned long long)arg2 routeType:(unsigned long long)arg3 routeRule:(unsigned long long)arg4 isRtReport:(_Bool)arg5 isBatchReport:(_Bool)arg6;
+ (unsigned long long)getObjectReportPolicy:(id)arg1;
+ (void)setObjectReportPolicy:(id)arg1 reportPolicy:(unsigned long long)arg2 routeType:(unsigned long long)arg3 routeRule:(unsigned long long)arg4 isRtReport:(_Bool)arg5 isBatchReport:(_Bool)arg6;
+ (unsigned long long)getViewReportPolicy:(id)arg1;
+ (void)setViewReportPolicy:(id)arg1 reportPolicy:(unsigned long long)arg2 routeType:(unsigned long long)arg3 routeRule:(unsigned long long)arg4 isRtReport:(_Bool)arg5 isBatchReport:(_Bool)arg6;
+ (unsigned long long)getPageReportPolicy:(id)arg1;
+ (void)setPageReportPolicy:(id)arg1 reportPolicy:(unsigned long long)arg2 routeType:(unsigned long long)arg3 routeRule:(unsigned long long)arg4 isRtReport:(_Bool)arg5 isBatchReport:(_Bool)arg6;
+ (id)getPageName:(id)arg1;
+ (unsigned long long)getBizGroupId:(id)arg1;
+ (unsigned long long)getPageId:(id)arg1;
+ (id)getViewId:(id)arg1;
+ (_Bool)isFullSubPage:(id)arg1;
+ (_Bool)isExistBizGroupId:(id)arg1;
+ (_Bool)isExistPageId:(id)arg1;
+ (_Bool)isExistViewId:(id)arg1;
+ (void)clearPageDataEntity:(id)arg1;
+ (void)pageDestroy:(id)arg1;
+ (void)setObjectDataEntity:(id)arg1 entity:(id)arg2;
+ (void)setPageDataEntity:(id)arg1 entity:(id)arg2;
+ (id)getObjectDataEntity:(id)arg1 needCreate:(_Bool)arg2;
+ (id)getPageDataEntity:(id)arg1 needCreate:(_Bool)arg2;

@end

