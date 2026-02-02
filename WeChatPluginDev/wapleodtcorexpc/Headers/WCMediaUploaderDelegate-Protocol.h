//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCUploadMedia;

@protocol WCMediaUploaderDelegate <NSObject>
- (void)onMediaUploadFinished:(WCUploadMedia *)arg1 uploadResult:(long long)arg2 uploadErrType:(long long)arg3;
- (void)onMediaUploadStarted:(WCUploadMedia *)arg1;
@end

