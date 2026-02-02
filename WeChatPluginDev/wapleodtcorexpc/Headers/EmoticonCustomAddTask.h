//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonCustomAddLogicController, NSString, UINavigationController;
@protocol EmoticonCustomAddTaskDelegate;

@interface EmoticonCustomAddTask : NSObject
{
    EmoticonCustomAddLogicController *_addLogicController;
    id <EmoticonCustomAddTaskDelegate> _delegate;
    UINavigationController *_topNavigationController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UINavigationController *topNavigationController; // @synthesize topNavigationController=_topNavigationController;
@property(nonatomic) __weak id <EmoticonCustomAddTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) EmoticonCustomAddLogicController *addLogicController; // @synthesize addLogicController=_addLogicController;
- (id)getViewController;
- (void)onAddEmoticonFinishedWithWrap:(id)arg1 isSucceeded:(_Bool)arg2;
- (void)onTakePhotoCancelled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

