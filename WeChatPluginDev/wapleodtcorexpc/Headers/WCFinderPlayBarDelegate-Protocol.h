//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderPlayBarDelegate <NSObject>

@optional
- (void)onVideoStopLoading;
- (void)onVideoLoading;
- (void)onVideoEndDrag;
- (void)onVideoStartDrag;
- (void)onVideoPause;
- (void)onVideoStart;
- (void)onVideoEnd;
- (void)updateVideoCurrentTime:(double)arg1;
@end

