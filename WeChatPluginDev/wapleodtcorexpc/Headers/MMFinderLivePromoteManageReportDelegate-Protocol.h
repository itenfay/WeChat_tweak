//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLivePromoteManageReportData, NSString;

@protocol MMFinderLivePromoteManageReportDelegate <NSObject>

@optional
- (void)onPromoteCanceledReport:(long long)arg1 reportData:(MMFinderLivePromoteManageReportData *)arg2;
- (void)onPromotePushedReport:(long long)arg1 reportData:(MMFinderLivePromoteManageReportData *)arg2;
- (void)onPromoteAddedReport:(long long)arg1 businessId:(NSString *)arg2;
- (void)onLivePromoteOperationReport:(long long)arg1 promoteActionType:(long long)arg2 reportData:(MMFinderLivePromoteManageReportData *)arg3;
- (void)onLiveStaterPromoteOperationReport:(long long)arg1 promoteActionType:(long long)arg2 reportData:(MMFinderLivePromoteManageReportData *)arg3;
@end

