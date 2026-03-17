//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFileHandOffItem;

@protocol HandOffCDNUploadMgrDelegate <NSObject>
- (void)sendUploadProgressForFileItem:(MMFileHandOffItem *)arg1;
- (void)renewCDNInfoForFileItemFailed:(MMFileHandOffItem *)arg1;
- (void)renewCDNInfoForFileItemSucceed:(MMFileHandOffItem *)arg1;
@end

