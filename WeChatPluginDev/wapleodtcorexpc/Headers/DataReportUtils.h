//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface DataReportUtils : NSObject
{
}

+ (unsigned long long)getModeFlag;
+ (_Bool)readParams:(id)arg1 value:(id)arg2 deep:(long long)arg3 block:(CDUnknownBlockType)arg4;
+ (id)genDebugParamsStr:(id)arg1;
+ (void)setOperateToastSwitchStatus2:(_Bool)arg1;
+ (_Bool)getOperateToastSwitchStatus2;
+ (void)setOperateToastSwitchStatus:(_Bool)arg1;
+ (_Bool)getOperateToastSwitchStatus;
+ (void)setDebugViewInfoSwitchStatus:(_Bool)arg1;
+ (_Bool)setDebugViewInfoSwitchStatus;
+ (void)setDebugExposeMaskSwitchStatus:(_Bool)arg1;
+ (_Bool)getDebugExposeMaskSwitchStatus;
+ (id)getNavigationLastViewController:(id)arg1;
+ (id)getChildViewControllers:(id)arg1;
+ (id)getParentViewController:(id)arg1;
+ (id)getSuperview:(id)arg1;
+ (_Bool)isDialogPage:(id)arg1;
+ (_Bool)isFullSubPage:(id)arg1;
+ (_Bool)isHalfSubPageCache:(id)arg1;
+ (_Bool)isHalfSubPage:(id)arg1;
+ (_Bool)isSubPage:(id)arg1;
+ (_Bool)isParentPage:(id)arg1;
+ (_Bool)is4TabOfLauncherUI:(id)arg1;
+ (id)findLogicParent:(id)arg1;
+ (id)findParent:(id)arg1;
+ (id)getRealisticViewController:(id)arg1;
+ (id)getContainerVC:(id)arg1;
+ (id)getContainerPage:(id)arg1;
+ (id)formatJsonObject:(id)arg1;
+ (id)searchScrollViews:(id)arg1 rootView:(id)arg2 withDeep:(long long)arg3;
+ (_Bool)isFilterMultiEvent:(id)arg1 reportPolicy:(unsigned long long)arg2;
+ (_Bool)isFilterViewEvent:(id)arg1 reportPolicy:(unsigned long long)arg2;
+ (_Bool)isFilterPageEvent:(id)arg1 reportPolicy:(unsigned long long)arg2;
+ (_Bool)isPageEvent:(id)arg1;
+ (_Bool)isViewEvent:(id)arg1;
+ (id)getRealCgiTarget:(id)arg1;
+ (_Bool)isCgiTarget:(id)arg1;
+ (_Bool)isPageTarget:(id)arg1;
+ (_Bool)isViewTarget:(id)arg1;
+ (unsigned long long)getMultiReportPolicyForEventId:(id)arg1;
+ (unsigned long long)getViewExposeReportPolicyForEventId:(id)arg1;
+ (unsigned long long)getViewClickReportPolicyForEventId:(id)arg1;
+ (unsigned long long)getViewOperateReportPolicyForEventId:(id)arg1;
+ (unsigned long long)getViewReportPolicyForEventId:(id)arg1;
+ (unsigned long long)getPageReportPolicyForEventId:(id)arg1;
+ (unsigned long long)getAppReportPolicyForEventId:(id)arg1;
+ (id)disperseMultiReportPolicy:(unsigned long long)arg1;
+ (id)disperseViewExposeReportPolicy:(unsigned long long)arg1;
+ (id)disperseViewClickReportPolicy:(unsigned long long)arg1;
+ (id)disperseViewOperateReportPolicy:(unsigned long long)arg1;
+ (id)disperseViewReportPolicy:(unsigned long long)arg1;
+ (id)dispersePageReportPolicy:(unsigned long long)arg1;
+ (id)disperseAppReportPolicy:(unsigned long long)arg1;
+ (void)performBlockOnMainThread:(CDUnknownBlockType)arg1;
+ (id)sharedSerialQueue;
+ (_Bool)isDebug;

@end

