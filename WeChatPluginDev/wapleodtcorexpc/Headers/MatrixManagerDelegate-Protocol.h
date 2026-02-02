//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MatrixIssue, MatrixManager, NSError;

@protocol MatrixManagerDelegate <NSObject>

@optional
- (_Bool)onMatrixManagerSupportCustomLagStrategy;
- (_Bool)onMatrixManagerCurrentNetworkOnWifi:(MatrixManager *)arg1;
- (void)onMatrixManager:(MatrixManager *)arg1 handleCoreDumpIssue:(MatrixIssue *)arg2 success:(_Bool)arg3;
- (void)onMatrixManager:(MatrixManager *)arg1 beginUploadCoreDumpIssue:(MatrixIssue *)arg2;
- (void)onMatrixManager:(MatrixManager *)arg1 handleCustomIssue:(MatrixIssue *)arg2 success:(_Bool)arg3;
- (void)onMatrixManager:(MatrixManager *)arg1 beginUploadCustomIssue:(MatrixIssue *)arg2;
- (void)onMatrixManager:(MatrixManager *)arg1 handleSqliteLintIssue:(MatrixIssue *)arg2 success:(_Bool)arg3;
- (void)onMatrixManager:(MatrixManager *)arg1 beginUploadSqliteLintIssue:(MatrixIssue *)arg2;
- (void)onMatrixManager:(MatrixManager *)arg1 handleMemoryStatIssue:(MatrixIssue *)arg2 success:(_Bool)arg3;
- (void)onMatrixManager:(MatrixManager *)arg1 beginUploadMemoryStatIssue:(MatrixIssue *)arg2;
- (void)onMatrixManager:(MatrixManager *)arg1 handleCrashIssueError:(NSError *)arg2;
- (void)onMatrixManager:(MatrixManager *)arg1 handleCrashIssue:(MatrixIssue *)arg2 success:(_Bool)arg3;
- (void)onMatrixManager:(MatrixManager *)arg1 beginUploadCrashIssue:(MatrixIssue *)arg2;
- (void)onMatrixManager:(MatrixManager *)arg1 handleLagIssue:(MatrixIssue *)arg2 success:(_Bool)arg3;
- (void)onMatrixManager:(MatrixManager *)arg1 beginUploadLagIssue:(MatrixIssue *)arg2;
@end

