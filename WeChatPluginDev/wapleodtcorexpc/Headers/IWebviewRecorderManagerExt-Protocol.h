//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IWebviewRecorderManagerExt <NSObject>

@optional
- (void)onFinishedRecord:(NSString *)arg1 ErrCode:(int)arg2 stopReason:(long long)arg3;
- (void)onRecordTimeTooShort;
- (void)onStartRecord:(long long)arg1;
@end

