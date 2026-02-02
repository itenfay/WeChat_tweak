//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIViewController, WAPageSheet;

@protocol WAPageSheetDelegate <NSObject>

@optional
- (double)getViewHeight;
- (void)pageSheet:(WAPageSheet *)arg1 needToPushViewController:(UIViewController *)arg2;
- (void)pageSheetDidCancelByRotate:(WAPageSheet *)arg1;
- (void)pageSheetDidCancelByTapAside:(WAPageSheet *)arg1;
- (void)pageSheetDidClose:(WAPageSheet *)arg1;
- (void)pageSheetWillClose:(WAPageSheet *)arg1;
- (void)pageSheetDidShow:(WAPageSheet *)arg1;
- (void)pageSheetWillShow:(WAPageSheet *)arg1;
@end

