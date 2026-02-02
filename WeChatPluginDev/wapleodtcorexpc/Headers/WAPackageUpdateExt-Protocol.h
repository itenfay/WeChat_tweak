//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WAInfoData;

@protocol WAPackageUpdateExt <NSObject>
- (void)onUpdateWeAppPackage:(WAInfoData *)arg1 updateResult:(_Bool)arg2;
- (void)onUpdateWeAppPackageStartDownload:(WAInfoData *)arg1;
- (void)onUpdateWeAppPackageNoNeedUpdate:(WAInfoData *)arg1;
@end

