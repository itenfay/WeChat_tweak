//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol EditImageCropToolBarDelegate <NSObject>

@optional
- (void)onCropToolBarCropProportionBtnClick:(_Bool)arg1 aspectRatio:(double)arg2;
- (void)onCropToolBarRotateBtnClicked;
- (void)onCropToolBarRevertBtnClicked;
- (void)onCropToolBarDoneBtnClicked;
- (void)onCropToolBarCancelBtnClicked;
@end

