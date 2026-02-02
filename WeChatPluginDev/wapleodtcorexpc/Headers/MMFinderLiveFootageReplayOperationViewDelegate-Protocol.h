//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMFinderLiveFootageReplayOperationViewDelegate <NSObject>
- (struct CGRect)onFootageReplayVideoFrameRequested;

@optional
- (void)onFootageReplayReportCommentWithSequenceId:(unsigned long long)arg1 frameId:(NSString *)arg2;
- (void)onFootageReplayGetVideoSize:(struct CGSize)arg1;
- (void)onFootageReplaySeekEndAtMediaTime:(double)arg1;
- (void)onFootageReplaySeekBegan;
- (void)onFootageReplayPaused;
- (void)onFootageReplayOrientationButtonTapped;
@end

