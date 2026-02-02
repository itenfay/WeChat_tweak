//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ImageDownloadLoader, NSData;

@protocol ImageDownloadLoaderDelegate <NSObject>

@optional
- (void)onDownloadFinishedWithLoader:(ImageDownloadLoader *)arg1 AndData:(NSData *)arg2;
@end

