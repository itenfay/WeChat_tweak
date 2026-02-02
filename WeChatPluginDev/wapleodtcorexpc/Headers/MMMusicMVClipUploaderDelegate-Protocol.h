//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderDataItem;

@protocol MMMusicMVClipUploaderDelegate <NSObject>
- (void)onClipUploadFailWithClipId:(NSString *)arg1;
- (void)onClipUploadSuccessWithClipId:(NSString *)arg1 finderDataItem:(WCFinderDataItem *)arg2;
@end

