//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCCanvasPageViewControllerExt <NSObject>

@optional
- (void)onCanvasViewActionFinderBulletCommentWithBusinessType:(int)arg1 pageId:(NSString *)arg2 commentScene:(int)arg3 actionType:(int)arg4 content:(NSString *)arg5 completionBlock:(void (^)(long long))arg6;
- (void)onCanvasViewGotHalfRandomCard:(NSString *)arg1 forPageId:(NSString *)arg2;
- (void)onCanvasViewDidBeDismissedWithPageId:(NSString *)arg1;
- (void)onCanvasViewWillClose;
- (void)onCanvasViewDidBePushed;
- (void)onCanvasViewDidBePoped;
@end

