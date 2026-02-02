//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "CameraScanBaseContentViewDelegate-Protocol.h"

@class UIImage;

@protocol CameraScanGoodsContentViewDelegate <CameraScanBaseContentViewDelegate>
- (UIImage *)getPinFgImage;
- (_Bool)shouldShowPinView;
- (UIImage *)getFullScreenBgImage;
- (_Bool)shouldShowFullScreenBgView;
- (UIImage *)getMarkDotCustomImage;
- (float)getDefaultInfoLabelBottomPadding;
@end

