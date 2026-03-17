//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IEdgeComputingDataSourceExt <NSObject>

@optional
- (void)onSendDataReportSDKData:(NSString *)arg1;
- (void)onSendDataReportSDKUBAData:(NSString *)arg1;
- (void)onSendSessionUBAAll:(NSString *)arg1;
- (void)onSendSessionSingleAll:(NSString *)arg1;
- (void)onSendSessionUBA:(NSString *)arg1;
- (void)onSendSessionPageMerge:(NSString *)arg1;
- (void)onSendSessionPageSingle:(NSString *)arg1 withReportID:(unsigned int)arg2;
- (void)onSendSessionMerge:(NSString *)arg1;
- (void)onSendSessionSingle:(NSString *)arg1;
- (void)onSendForeBack:(NSString *)arg1;
- (void)onSendKV:(NSString *)arg1 withReportID:(unsigned int)arg2;
@end

