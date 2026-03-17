//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IWCSysCallCheck <NSObject>
- (void)onMediaPlayStateChange:(NSString *)arg1;
- (void)clearInterruptStatus;
- (_Bool)isInterrupting;
- (_Bool)isPhoneCalling;
- (void)stopCheck;
- (void)startCheck;
@end

