//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol WXGDownloadSessionViewControllerDelegate <NSObject>
- (void)onDownloadSessionSelectCancel;
- (void)onDownloadSessionSelectSession:(NSArray *)arg1 start:(unsigned long long)arg2 end:(unsigned long long)arg3 isAllSession:(_Bool)arg4;
@end

