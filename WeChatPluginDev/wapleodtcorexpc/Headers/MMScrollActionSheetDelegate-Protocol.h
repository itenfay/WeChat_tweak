//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMScrollActionSheet, MMScrollActionSheetItem, MMScrollActionSheetItemView, NSString, UIView;

@protocol MMScrollActionSheetDelegate <NSObject>

@optional
- (MMScrollActionSheetItemView *)customViewForItem:(MMScrollActionSheetItem *)arg1;
- (UIView *)customViewForRow:(long long)arg1;
- (void)scrollActionSheet:(MMScrollActionSheet *)arg1 clickCustomBtn:(id)arg2;
- (void)scrollActionSheetInDismissAnimation:(MMScrollActionSheet *)arg1;
- (void)scrollActionSheetInShowAnimation:(MMScrollActionSheet *)arg1;
- (void)scrollActionSheetDidDismiss:(MMScrollActionSheet *)arg1;
- (void)scrollActionSheetWillDismiss:(MMScrollActionSheet *)arg1;
- (void)scrollActionSheetDidScroll:(MMScrollActionSheet *)arg1;
- (void)scrollActionSheetDidTapTransparent:(MMScrollActionSheet *)arg1;
- (_Bool)scrollActionSheetShouldCancel:(MMScrollActionSheet *)arg1;
- (void)scrollActionSheetDidCancel:(MMScrollActionSheet *)arg1;
- (void)scrollActionSheetDidAppeared:(MMScrollActionSheet *)arg1;
- (void)scrollActionSheetDidClickTopPrivacy:(MMScrollActionSheet *)arg1;
- (void)scrollActionSheetDidClickTop:(MMScrollActionSheet *)arg1;
- (void)scrollActionSheet:(MMScrollActionSheet *)arg1 didClickUrl:(NSString *)arg2;
- (void)scrollActionSheet:(MMScrollActionSheet *)arg1 didSelecteDisableItem:(MMScrollActionSheetItem *)arg2;
- (void)scrollActionSheet:(MMScrollActionSheet *)arg1 didSelecteItem:(MMScrollActionSheetItem *)arg2;
@end

