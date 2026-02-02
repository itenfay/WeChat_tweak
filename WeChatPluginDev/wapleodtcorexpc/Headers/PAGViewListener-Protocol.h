//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class PAGView;

@protocol PAGViewListener <NSObject>

@optional
- (void)onAnimationUpdate:(PAGView *)arg1;
- (void)onAnimationRepeat:(PAGView *)arg1;
- (void)onAnimationCancel:(PAGView *)arg1;
- (void)onAnimationEnd:(PAGView *)arg1;
- (void)onAnimationStart:(PAGView *)arg1;
@end

