//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIGestureRecognizer, WCC2CVideoThumbImageView;

@protocol WCC2CVideoThumbImageViewDelegate <NSObject>
- (struct CGRect)adjustShowAreaForDisplayFrame:(struct CGRect)arg1;
- (void)thumbImageView:(WCC2CVideoThumbImageView *)arg1 doubleTap:(UIGestureRecognizer *)arg2;
- (void)thumbImageViewDidEndZoom:(WCC2CVideoThumbImageView *)arg1;
- (void)thumbImageViewDidZoom:(WCC2CVideoThumbImageView *)arg1;
- (void)thumbImageViewWillBeginZoom:(WCC2CVideoThumbImageView *)arg1;
@end

