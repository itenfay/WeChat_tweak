//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMActionSheetScrollView, MMScrollActionSheetItem, MMScrollActionSheetItemView;

@protocol MMActionSheetScrollViewDelegate <NSObject>
- (double)extraItemViewSpacingForScrollView:(MMActionSheetScrollView *)arg1;
- (void)onCreateItemView:(MMScrollActionSheetItemView *)arg1 forItem:(MMScrollActionSheetItem *)arg2;
- (MMScrollActionSheetItemView *)customViewForItem:(MMScrollActionSheetItem *)arg1;

@optional
- (double)customIconMargin;
@end

