//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MatrixIssue, NSError;
@protocol MatrixPluginProtocol;

@protocol MatrixPluginListenerDelegate <NSObject>
- (void)onReportIssue:(MatrixIssue *)arg1;

@optional
- (void)onError:(id <MatrixPluginProtocol>)arg1 error:(NSError *)arg2;
- (void)onDestroy:(id <MatrixPluginProtocol>)arg1;
- (void)onStop:(id <MatrixPluginProtocol>)arg1;
- (void)onStart:(id <MatrixPluginProtocol>)arg1;
- (void)onInit:(id <MatrixPluginProtocol>)arg1;
@end

