//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, ScanItemBase;

@protocol ScanBarcodeExt <NSObject>
- (void)OnSendBarcode:(ScanItemBase *)arg1 wordingItemList:(NSArray *)arg2 Err:(int)arg3;
@end

