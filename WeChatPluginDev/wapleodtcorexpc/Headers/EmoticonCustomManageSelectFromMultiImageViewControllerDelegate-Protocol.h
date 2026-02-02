//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol EmoticonCustomManageSelectFromMultiImageViewControllerDelegate <NSObject>
- (void)onMultiImageDidCancel;
- (void)onMultiImageGetImageDataFailed;
- (void)onMultiImageSelectImageData:(NSData *)arg1;
- (void)onMultiImageStartDownload;
@end

