//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FBSDKGraphErrorRecoveryProcessor, NSError;

@protocol FBSDKGraphErrorRecoveryProcessorDelegate <NSObject>
- (void)processorDidAttemptRecovery:(FBSDKGraphErrorRecoveryProcessor *)arg1 didRecover:(_Bool)arg2 error:(NSError *)arg3;

@optional
- (_Bool)processorWillProcessError:(FBSDKGraphErrorRecoveryProcessor *)arg1 error:(NSError *)arg2;
@end

