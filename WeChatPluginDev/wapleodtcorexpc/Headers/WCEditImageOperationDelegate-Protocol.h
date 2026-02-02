//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditImageTextToolV2, NSString, UIColor, UIScrollView, UITapGestureRecognizer, UIView;

@protocol WCEditImageOperationDelegate <NSObject>
- (struct CGRect)getAssetPreviewFrame;
- (void)editImageShowTextInputView:(EditImageTextToolV2 *)arg1 displayStr:(NSString *)arg2 lineColor:(UIColor *)arg3 textStyle:(unsigned long long)arg4;
- (void)onTapGesture;
- (void)dragaAndDropWidget;
- (void)editImageViewdidEndDraw;
- (void)editImageViewDidStartDraw;

@optional
- (void)editImageDidRecordAnOperation;
- (struct CGRect)editImageViewGetCropFunctionInitialArea;
- (void)scrollViewWillEndDragging:(UIScrollView *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewHandleDoubleClickGesture:(UITapGestureRecognizer *)arg1;
- (void)scrollViewContentOffsetChanged:(struct CGPoint)arg1;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg1;
- (_Bool)scrollViewDidEndZooming:(UIScrollView *)arg1 withView:(UIView *)arg2 atScale:(double)arg3;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)scrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (_Bool)scrollViewDidZoom:(UIScrollView *)arg1;
- (_Bool)isZooming;
@end

