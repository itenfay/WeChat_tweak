//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMScrollActionSheetItem, MMScrollActionSheetItemView;

@protocol MMScrollActionSheetItemViewDelegate <NSObject>
- (void)onActionSheetIconView:(MMScrollActionSheetItemView *)arg1 didTapedWithDisableItem:(MMScrollActionSheetItem *)arg2;
- (void)onActionSheetIconView:(MMScrollActionSheetItemView *)arg1 didTapedWithItem:(MMScrollActionSheetItem *)arg2;
@end

