//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveScrollActionSheetItem, MMLiveScrollActionSheetItemView;

@protocol MMLiveScrollActionSheetItemViewDelegate <NSObject>

@optional
- (void)onActionSheetIconView:(MMLiveScrollActionSheetItemView *)arg1 didTapedWithDisableItem:(MMLiveScrollActionSheetItem *)arg2;
- (void)onActionSheetIconView:(MMLiveScrollActionSheetItemView *)arg1 didTapedWithItem:(MMLiveScrollActionSheetItem *)arg2;
@end

