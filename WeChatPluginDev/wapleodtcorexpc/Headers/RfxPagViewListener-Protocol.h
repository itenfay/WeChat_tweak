//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class RfxPagView;

@protocol RfxPagViewListener <NSObject>

@optional
- (void)onRfxAnimationUpdate:(RfxPagView *)arg1;
- (void)onRfxAnimationRepeat:(RfxPagView *)arg1;
- (void)onRfxAnimationCancel:(RfxPagView *)arg1;
- (void)onRfxAnimationEnd:(RfxPagView *)arg1;
- (void)onRfxAnimationStart:(RfxPagView *)arg1;
@end

