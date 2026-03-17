//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMEmoticonStoreDownloadObserver <NSObject>
- (void)onDownloadProgress:(float)arg1;
- (void)onDownloadStatusChangeTo:(unsigned long long)arg1;
@end

