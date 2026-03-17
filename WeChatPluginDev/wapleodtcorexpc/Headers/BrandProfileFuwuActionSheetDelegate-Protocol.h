//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BrandProfileFuwuActionSheet, BrandProfileFuwuInfo;

@protocol BrandProfileFuwuActionSheetDelegate <NSObject>
- (void)actionSheetTappedCancel:(BrandProfileFuwuActionSheet *)arg1;
- (void)actionSheetTappedTransparent:(BrandProfileFuwuActionSheet *)arg1;
- (void)actionSheet:(BrandProfileFuwuActionSheet *)arg1 didTappedHorizontalItemInfo:(BrandProfileFuwuInfo *)arg2;
@end

