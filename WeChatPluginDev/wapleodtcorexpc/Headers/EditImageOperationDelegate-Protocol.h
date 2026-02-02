//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIScrollView, UIView;

@protocol EditImageOperationDelegate <NSObject>
- (struct CGRect)getAssetPreviewFrame;
- (void)onAddRealNewMainTextWidget;
- (void)onAddNewPOIWidget;
- (void)onTapGesture;
- (void)dragaAndDropWidget;
- (void)editImageViewPOIWidgetHiddenStateChange:(_Bool)arg1;
- (void)editImageViewLyricsWidgetHadBeenDoubleTap;
- (void)editImageViewLyricsWidgetHadBeenDeleted;
- (void)editImageViewdidEndDraw;
- (void)editImageViewDidStartDraw;

@optional
- (void)editImageDidRecordAnOperation;
- (struct CGRect)editImageViewGetCropFunctionInitialArea;
- (_Bool)scrollViewDidEndZooming:(UIScrollView *)arg1 withView:(UIView *)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(UIScrollView *)arg1 withView:(UIView *)arg2;
- (void)scrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)scrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (_Bool)scrollViewDidZoom:(UIScrollView *)arg1;
- (_Bool)isZooming;
@end

