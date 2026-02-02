//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class CMessageWrap, UIScrollView;

@protocol MMRichTextSelectEventDelegate <MMUIViewControllerDelegate>

@optional
- (void)onRemoveRTCV;
- (void)willShowMenuController:(id)arg1 inMsgWrap:(CMessageWrap *)arg2;
- (void)onDoubleClick;
- (void)onSingleTapRTCV;
- (void)rtcScrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)rtcScrollViewDidScroll:(UIScrollView *)arg1;
- (UIScrollView *)getScrollView;
- (void)hideToolViewAnimated:(_Bool)arg1;
@end

