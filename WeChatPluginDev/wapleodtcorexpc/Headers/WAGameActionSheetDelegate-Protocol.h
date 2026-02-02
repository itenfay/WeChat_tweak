//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WAGameActionSheet;

@protocol WAGameActionSheetDelegate <NSObject>

@optional
- (void)gameActionSheetDidDismiss:(WAGameActionSheet *)arg1;
- (void)gameActionSheetWillDismiss:(WAGameActionSheet *)arg1;
- (void)gameActionSheetInfoCliked:(WAGameActionSheet *)arg1;
- (void)gameActionSheetCancel:(WAGameActionSheet *)arg1;
- (void)gameActionSheet:(WAGameActionSheet *)arg1 clickedButtonTitle:(NSString *)arg2;
- (void)gameActionSheet:(WAGameActionSheet *)arg1 didDismissWithMenuIndex:(long long)arg2;
@end

