//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveGetMoneyOffTagResponse, MMFinderLiveInstantDiscountWidgetView, MMFinderLiveTaskId, NSString;
@protocol MMFinderLiveInstantDiscountHandlerDelegate;

@interface MMFinderLiveInstantDiscountHandler : NSObject
{
    MMFinderLiveTaskId *_taskID;
    FinderLiveGetMoneyOffTagResponse *_info;
    id <MMFinderLiveInstantDiscountHandlerDelegate> _delegate;
    MMFinderLiveInstantDiscountWidgetView *_widgetView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMFinderLiveInstantDiscountWidgetView *widgetView; // @synthesize widgetView=_widgetView;
@property(nonatomic) __weak id <MMFinderLiveInstantDiscountHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FinderLiveGetMoneyOffTagResponse *info; // @synthesize info=_info;
@property(retain, nonatomic) MMFinderLiveTaskId *taskID; // @synthesize taskID=_taskID;
- (void)openActivityPage;
- (void)autoOpenActivityPageIfNeeded;
- (void)onInstantDiscountWidgetShouldBeReplaced;
- (void)onInstantDiscountWidgetClicked;
- (void)clean;
- (id)widgetContainerView;
- (void)showWidgetWithInfo:(id)arg1;
- (void)handleInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

