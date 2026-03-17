//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MyWCDB, NSArray, WCMediaItem, WCUploadTask;

@protocol WCBGImgLogicNotity <NSObject>

@optional
- (MyWCDB *)database;
- (NSArray *)getUploadingDataItems;
- (void)NotifyBackgroundChanged;
- (void)NotifyToDownloadMedia:(WCMediaItem *)arg1 downloadType:(long long)arg2;
- (void)NotifyToUploadWithTask:(WCUploadTask *)arg1;
@end

