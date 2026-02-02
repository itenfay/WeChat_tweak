//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSDictionary, NSMutableDictionary, NSString, UIViewController;

@interface UIView (DataReport)
- (CDUnknownBlockType)dr_setViewIgnoreKeyboardChange;
- (CDUnknownBlockType)dr_setViewIgnoreHiddenChange;
- (CDUnknownBlockType)dr_setViewIgnoreAlphaChange;
- (CDUnknownBlockType)dr_forceChangeExpState;
- (CDUnknownBlockType)dr_linkCurPage;
- (CDUnknownBlockType)dr_setViewReportInterval;
- (CDUnknownBlockType)dr_setViewExposeMinRate;
- (CDUnknownBlockType)dr_setViewExposeMinTime;
- (CDUnknownBlockType)dr_setEventCallback;
- (CDUnknownBlockType)dr_setCgiPolicy;
- (CDUnknownBlockType)dr_setViewReportPolicy2;
- (CDUnknownBlockType)dr_setViewReportPolicy;
- (CDUnknownBlockType)dr_getInnerProperty;
- (CDUnknownBlockType)dr_resetInnerProperty;
- (CDUnknownBlockType)dr_removeInnerProperty;
- (CDUnknownBlockType)dr_setInnerPropertys;
- (CDUnknownBlockType)dr_setInnerProperty;
- (CDUnknownBlockType)dr_getViewEventParam;
- (CDUnknownBlockType)dr_removeViewEventParams;
- (CDUnknownBlockType)dr_removeViewEventParam;
- (CDUnknownBlockType)dr_setViewEventParams;
- (CDUnknownBlockType)dr_setViewEventParam;
- (CDUnknownBlockType)dr_resetViewParams;
- (CDUnknownBlockType)dr_removeViewParams;
- (CDUnknownBlockType)dr_removeViewParam;
- (CDUnknownBlockType)dr_setViewParams;
- (CDUnknownBlockType)dr_setViewParam;
- (CDUnknownBlockType)dr_getDynamicParamsBlocks;
- (CDUnknownBlockType)dr_addDynamicParamsBlock;
- (CDUnknownBlockType)dr_setDynamicParamsBlock;
- (void)setDr_dynamicParamsBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)dr_setLogicParent;
- (CDUnknownBlockType)dr_setViewId;
- (CDUnknownBlockType)dr_bindViewReportInfo;
@property(nonatomic) __weak UIViewController *dr_realisticContainerVC;
@property(nonatomic) __weak id dr_relatedModel;
@property(readonly, copy, nonatomic) NSMutableDictionary *drLastReportTimes;
@property(readonly, copy, nonatomic) NSMutableDictionary *drReportIntervals;
- (id)drDynamicParamsBlock_inner;
@property(readonly, copy, nonatomic) NSDictionary *dr_reportPolicy;
- (id)drReportPolicy_inner;
- (id)drInnerProperty_inner;
@property(nonatomic) __weak UIViewController *dr_belongToVC;
@property(nonatomic) __weak UIView *dr_logicParent;
- (id)drViewEventParams_Inner;
@property(readonly, copy, nonatomic) NSDictionary *dr_viewParams;
- (id)drViewParams_inner;
@property(copy, nonatomic) NSString *dr_viewUniqueId;
@property(copy, nonatomic) NSString *dr_viewId;
@end

