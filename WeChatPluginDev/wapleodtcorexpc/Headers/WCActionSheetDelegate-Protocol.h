//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCActionSheet;

@protocol WCActionSheetDelegate <NSObject>

@optional
- (void)actionSheetViewLoaded:(WCActionSheet *)arg1;
- (void)actionSheet:(WCActionSheet *)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(WCActionSheet *)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)didPresentActionSheet:(WCActionSheet *)arg1;
- (void)willPresentActionSheet:(WCActionSheet *)arg1;
- (void)actionSheetCancel:(WCActionSheet *)arg1;
- (void)actionSheet:(WCActionSheet *)arg1 clickedButtonAtIndex:(long long)arg2;
@end

