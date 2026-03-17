//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIImage;

@protocol WCPayGPPhotoViewControllerDelegate <NSObject>
- (void)onPhtotViewControllerClickSaveImage:(UIImage *)arg1;

@optional
- (void)onPhotoViewControllerDismiss;
- (void)onPhotoViewControllerClickDeleteImage;
- (_Bool)shouldShowDeleteMenu;
@end

