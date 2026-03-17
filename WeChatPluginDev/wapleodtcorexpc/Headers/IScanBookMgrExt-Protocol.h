//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, ScanItemBase, ScanProductItem;

@protocol IScanBookMgrExt <NSObject>

@optional
- (void)OnGetRemoteProductItem:(ScanProductItem *)arg1 QRCodeUrl:(NSString *)arg2 Error:(int)arg3;
- (void)OnSendSBImageError:(int)arg1;
- (void)OnSendSBImage:(unsigned int)arg1 ScanItem:(ScanItemBase *)arg2 ImageType:(int)arg3;
@end

