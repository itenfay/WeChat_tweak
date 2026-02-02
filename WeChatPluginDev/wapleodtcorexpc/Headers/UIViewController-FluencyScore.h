//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class NSString;

@interface UIViewController (FluencyScore)
- (unsigned long long)fluencyScoreScene;
- (id)fluencyScoreID;
- (void)stopFluencyScoreRecording:(id)arg1;
- (void)startFluencyScoreRecording:(id)arg1;
- (void)mm_scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)mm_scrollViewDidEndDecelerating:(id)arg1;
- (void)mm_scrollViewWillBeginDragging:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

