//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MinimizeTaskData, NSString, UIViewController;

@interface MinimizeTaskBaseLogicController : NSObject
{
    MinimizeTaskData *_taskData;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) MinimizeTaskData *taskData; // @synthesize taskData=_taskData;
- (void)onEnterRecentUsedTask:(id)arg1;
- (id)onLeaveTaskBeforeEnterAnother:(id)arg1;
- (void)onMinimizedTaskItemExposed:(id)arg1;
- (void)onRemoveMinimizedTask:(id)arg1;
- (_Bool)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (id)initWithTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

