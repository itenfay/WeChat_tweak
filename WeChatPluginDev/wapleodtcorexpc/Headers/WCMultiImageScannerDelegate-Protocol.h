//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCMultiImageScannerDelegate <NSObject>
- (void)onDeleteAllItem;
- (void)onDeleteItemAtIndex:(unsigned long long)arg1;

@optional
- (void)willDeleteAllItems;
- (void)willDeleteItemAtIndex:(unsigned long long)arg1;
@end

