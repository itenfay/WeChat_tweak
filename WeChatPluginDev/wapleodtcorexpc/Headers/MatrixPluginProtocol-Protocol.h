//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MatrixIssue, NSError, NSString;
@protocol MatrixPluginListenerDelegate;

@protocol MatrixPluginProtocol <NSObject>
+ (NSString *)getTag;
- (void)reportError:(NSError *)arg1;
- (void)reportIssueCompleteWithIssue:(MatrixIssue *)arg1 success:(_Bool)arg2;
- (void)reportIssue:(MatrixIssue *)arg1;
- (void)setupPluginListener:(id <MatrixPluginListenerDelegate>)arg1;
- (void)destroy;
- (void)stop;
- (_Bool)start;
@end

