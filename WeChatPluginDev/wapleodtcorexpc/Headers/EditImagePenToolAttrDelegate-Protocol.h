//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditImagePenToolAttrView, UIColor;

@protocol EditImagePenToolAttrDelegate <NSObject>
- (void)onClosePenToolAttrView;
- (void)undoPenEditImage;
- (void)setSelectedColorFromGradientBar:(UIColor *)arg1;

@optional
- (void)penToolAttrView:(EditImagePenToolAttrView *)arg1 didClickEraserBtn:(_Bool)arg2;
@end

