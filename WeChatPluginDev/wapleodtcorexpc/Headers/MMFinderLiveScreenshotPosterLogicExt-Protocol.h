//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveScreenshotPosterLogic;

@protocol MMFinderLiveScreenshotPosterLogicExt <NSObject>

@optional
- (void)onScreenshotInvalidatedForScreenshotPosterLogic:(MMFinderLiveScreenshotPosterLogic *)arg1;
- (void)onScreenshotReadyForScreenshotPosterLogic:(MMFinderLiveScreenshotPosterLogic *)arg1;
- (void)onScreenshotAssociatedImageRequestedForScreenshotPosterLogic:(MMFinderLiveScreenshotPosterLogic *)arg1 asyncBeginBlock:(void (^)(void))arg2 asyncEndBlock:(void (^)(void))arg3;
- (void)onScreenshotCommitVetoRequestedForScreenshotPosterLogic:(MMFinderLiveScreenshotPosterLogic *)arg1 vetoFlag:(_Bool *)arg2;
@end

