//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiteAppDownloadItem;

@protocol MMLiteAppDownloadMgrDelegate <NSObject>
- (void)onDownloadTaskCompletion:(MMLiteAppDownloadItem *)arg1 errType:(unsigned long long)arg2 errCode:(int)arg3;
@end

