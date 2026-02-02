//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSString;

@protocol MMEmoticonStoreDownloadUIHelper <NSObject>
- (MMUIViewController *)curViewController;
- (void)showAlertWith:(NSString *)arg1;
- (void)stopLoadingOKIfNeededForPid:(NSString *)arg1 withWording:(NSString *)arg2;
- (void)stopLoadingIfNeededForPid:(NSString *)arg1;
- (void)stopLoadingOKWithWoring:(NSString *)arg1;
- (void)stopLoading;
- (void)startLoading;
@end

