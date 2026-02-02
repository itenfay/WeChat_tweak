//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController, WCDataItem;

@protocol WCAdConventionalHalfScreenScrollViewDelegate <NSObject>

@optional
- (void)onHalfScreenScrollViewUpdateAnimatingState:(_Bool)arg1;
- (void)onHalfScreenScrollViewWillStickToBottom;
- (void)onHalfScreenScrollViewDidPinToTop;
- (void)onHalfScreenScrollViewDidChangeVisibleHeight:(double)arg1;
- (void)onHalfScreenScrollViewUpdateTitle:(NSString *)arg1;
- (void)onHalfScreenScrollViewCeilingTopWithPercent:(double)arg1 animated:(_Bool)arg2;
- (void)onHalfScreenScrollViewWillShowViewController:(UIViewController *)arg1;
- (void)onHalfScreenScrollViewWillAddViewController:(UIViewController *)arg1;
- (double)onHalfScreenScrollViewFetchCalculatedHeight;
- (unsigned long long)onHalfScreenScrollViewFetchContentItemScene;
- (WCDataItem *)onHalfScreenScrollViewFetchDataItem;
@end

