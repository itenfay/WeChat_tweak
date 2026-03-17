//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMDiskUsageScanStat;

@protocol MMDiskUsageScannerDelegate <NSObject>
- (void)onDiskUsageScanFinishedWithScanStat:(MMDiskUsageScanStat *)arg1;
- (void)onDiskUsageScanCancel;
- (void)onDiskUsageScanStart;

@optional
- (void)onDiskUsageScanProgress:(float)arg1 isAvailabled:(_Bool)arg2;
@end

