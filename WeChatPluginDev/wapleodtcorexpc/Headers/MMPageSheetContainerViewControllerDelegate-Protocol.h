//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMPageSheetContainerViewController;

@protocol MMPageSheetContainerViewControllerDelegate <NSObject>

@optional
- (void)pageSheetContainerKeyboardChange:(MMPageSheetContainerViewController *)arg1 isShowKeyboard:(_Bool)arg2 keyboardHeight:(double)arg3;
- (void)pageSheetContainerVCDidDismiss:(MMPageSheetContainerViewController *)arg1;
- (void)pageSheetContainerVCWillDismiss:(MMPageSheetContainerViewController *)arg1;
- (void)pageSheetContainerVCDidAppear:(MMPageSheetContainerViewController *)arg1;
- (void)pageSheetContainerVCWillAppear:(MMPageSheetContainerViewController *)arg1;
@end

