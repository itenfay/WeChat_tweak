//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap, UIViewController;

@protocol WCC2CImageScrollViewDelegate <NSObject>
- (UIViewController *)getCurrentViewController;
- (void)onWXVideoPlayerProgressBarHiddenChangeTo:(_Bool)arg1;
- (void)onGetVideoViewBottomLineCenterY:(double *)arg1 leftPartWidth:(double *)arg2 rightPartWidth:(double *)arg3 rightPartMargin:(double *)arg4;
- (void)updateToolbar;
- (_Bool)onClickSaveHDImageAlbumButton;
- (void)onCancelCurrentDownload;
- (void)onViewHDImage:(id)arg1;
- (_Bool)isDisplayTranslateResult:(CMessageWrap *)arg1;
- (unsigned int)getStatusFor:(CMessageWrap *)arg1;
@end

