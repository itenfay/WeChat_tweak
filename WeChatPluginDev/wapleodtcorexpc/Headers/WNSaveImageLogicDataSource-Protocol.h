//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FavoritesItem, RTEAttachmentViewProvider, WNTextView;

@protocol WNSaveImageLogicDataSource <NSObject>
- (RTEAttachmentViewProvider *)getAttachmentViewProviderForSquareImageUtilWithTransparentMode;
- (RTEAttachmentViewProvider *)getAttachmentViewProviderForSquareImageUtilWithDarkMode;
- (RTEAttachmentViewProvider *)getAttachmentViewProviderForSquareImageUtilWithLightMode;
- (RTEAttachmentViewProvider *)getAttachmentViewProviderForLongImageUtilWithTransparentMode;
- (RTEAttachmentViewProvider *)getAttachmentViewProviderForLongImageUtilWithDarkMode;
- (RTEAttachmentViewProvider *)getAttachmentViewProviderForLongImageUtilWithLightMode;
- (WNTextView *)creatRTETextViewWithCustomFrame:(struct CGRect)arg1 andTextContainerInset:(struct UIEdgeInsets)arg2;
- (WNTextView *)creatRTETextViewWithCustomFrame:(struct CGRect)arg1;
- (FavoritesItem *)favItem;
- (_Bool)bEditable;
@end

