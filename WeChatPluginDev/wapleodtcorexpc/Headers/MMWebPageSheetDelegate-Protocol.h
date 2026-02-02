//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMPageSheetAdapter;

@protocol MMWebPageSheetDelegate <NSObject>

@optional
- (void)webPageSheetDidDismiss:(MMPageSheetAdapter *)arg1;
- (void)webPageSheetWillDismiss:(MMPageSheetAdapter *)arg1;
@end

