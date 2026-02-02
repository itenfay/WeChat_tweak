//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface UIView (GameChatRoomTap)
+ (id)gcSvgImgWithData:(id)arg1 color:(id)arg2 size:(struct CGSize)arg3 dynamicImg:(_Bool)arg4;
- (void)gcAddSubviews:(id)arg1;
- (id)gcLightAndDarkImgNamed:(id)arg1;
- (id)gcEmoticonImg;
- (id)gcSvgImgWithStr:(id)arg1 darkModeStr:(id)arg2;
- (id)gcSvgImgWithStr:(id)arg1 color:(id)arg2 size:(struct CGSize)arg3 dynamicImg:(_Bool)arg4;
- (id)gcSvgImgWithStr:(id)arg1 color:(id)arg2 dynamicImg:(_Bool)arg3;
- (id)gcSvgImgWithStr:(id)arg1 color:(id)arg2 size:(struct CGSize)arg3;
- (id)gcSvgImgWithStr:(id)arg1 color:(id)arg2;
- (id)gcSvgImgWithStr:(id)arg1;
- (void)horiAlignWithLayoutConfig:(id)arg1;
- (id)gcVisibleSubViews;
- (id)gcVisibleSubViewsForViewArray:(id)arg1;
- (id)horiAlignSubViewArray:(id)arg1 space:(double)arg2 maxRight:(double)arg3 fromLeft:(double)arg4 lineSpace:(double)arg5 alignStrategy:(unsigned long long)arg6;
- (id)horiAlignSubViewArray:(id)arg1 space:(double)arg2 maxRight:(double)arg3 fromLeft:(double)arg4;
- (id)horiAlignSubViewArray:(id)arg1 space:(double)arg2 maxRight:(double)arg3;
- (void)shrinkSubViews:(id)arg1 maxWidth:(double)arg2 space:(double)arg3;
- (double)totalNumFrom:(id)arg1;
- (id)flexiblePointWidthArrayFromViewArray:(id)arg1;
- (id)fixPointWidthArrayFromViewArray:(id)arg1;
- (double)gcFelxibleLayoutWidth;
- (double)gcMinLayoutWidth;
- (void)expandSubviewWidthToFill;
- (double)verticalAlignVisibleSubViewWithConfig:(id)arg1;
- (double)verticalAlignVisibleSubView:(id)arg1 withSpace:(double)arg2 centerY:(double)arg3 left:(double)arg4 maxWidth:(double)arg5;
- (id)verticalAlignLayoutConfigWithSubView:(id)arg1 withSpace:(double)arg2 centerY:(double)arg3 left:(double)arg4 maxWidth:(double)arg5;
- (double)verticalAlignVisibleSubView:(id)arg1 withSpace:(double)arg2 centerY:(double)arg3;
- (_Bool)gcIsViewVisible:(id)arg1;
- (void)removeChatRoomDarkStyle;
- (void)configureChatRoomDarkStyleForIsCustomImg:(_Bool)arg1;
- (void)darkenWithImageTopAlpha:(double)arg1 bottomAlpha:(double)arg2;
- (void)setViewAlphaGradientToPosition:(double)arg1 topAlpha:(double)arg2 bottomAlpha:(double)arg3 color:(id)arg4;
- (id)gcAddTapGestureWithBlock:(CDUnknownBlockType)arg1;
- (void)gcAddTapGesture:(id)arg1;
- (id)gcAddTapGestureWithTarget:(id)arg1 selector:(SEL)arg2;
@end

