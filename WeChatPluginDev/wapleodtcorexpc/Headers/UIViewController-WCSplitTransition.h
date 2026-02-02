//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class NSString;

@interface UIViewController (WCSplitTransition)
- (void)onTransitionDidDismissed:(id)arg1;
- (_Bool)isWCSplitTransitionViewController;
- (id)splitOverDetailTransition;
- (void)setupSplitOverDetailTransition:(id)arg1;
- (id)splitDetailTransition;
- (void)setupSplitDetailTransition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

