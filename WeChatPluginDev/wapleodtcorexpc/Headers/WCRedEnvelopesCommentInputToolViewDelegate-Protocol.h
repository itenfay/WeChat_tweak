//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIImage, WCRedEnvelopesCommentInputToolView;

@protocol WCRedEnvelopesCommentInputToolViewDelegate <NSObject>

@optional
- (void)updateToolViewAnimationCurve:(long long)arg1;
- (void)updateToolViewAnimationDuration:(double)arg1;
- (void)beforeLandscapeToolViewHeightUpdate:(WCRedEnvelopesCommentInputToolView *)arg1;
- (void)afterLandscapeToolViewHeightUpdate:(WCRedEnvelopesCommentInputToolView *)arg1;
- (void)pasteImage:(UIImage *)arg1;
- (void)TextDidChanged:(NSString *)arg1 selectedRange:(struct _NSRange)arg2;
- (void)ToolViewPositionDidChanged:(_Bool)arg1 animated:(_Bool)arg2;
- (void)OnToolViewDissmiss;
- (void)SendTextMessageToolView:(NSString *)arg1;
@end

