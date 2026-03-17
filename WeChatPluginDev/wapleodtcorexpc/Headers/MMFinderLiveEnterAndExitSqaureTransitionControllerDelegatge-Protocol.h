//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveEnterSqaureTransitionContext;
@protocol MMFinderLiveEnterSquareAnimiatedDelegate;

@protocol MMFinderLiveEnterAndExitSqaureTransitionControllerDelegatge <NSObject>
- (struct CGRect)bottomPlayerViewSrcFrame;
- (_Bool)canEnterSquare;
- (void)onEnterSqaureTransitionControllerEnd:(id <MMFinderLiveEnterSquareAnimiatedDelegate>)arg1 context:(MMFinderLiveEnterSqaureTransitionContext *)arg2 isComplete:(_Bool)arg3 isInteracting:(_Bool)arg4 isPop:(_Bool)arg5;
- (void)onEnterSqaureTransitionControllerBegin:(id <MMFinderLiveEnterSquareAnimiatedDelegate>)arg1 isPop:(_Bool)arg2 isGesturePanEnter:(_Bool)arg3;
@end

