//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WWKFReportLocationMgrExt <NSObject>

@optional
- (void)onSetAllowReportLocation:(NSString *)arg1 allowReport:(_Bool)arg2 success:(_Bool)arg3;
- (void)onReportLocation:(NSString *)arg1 success:(_Bool)arg2;
@end

