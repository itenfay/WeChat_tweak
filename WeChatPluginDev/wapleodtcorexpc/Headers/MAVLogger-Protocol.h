//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MAVLogger <NSObject>
- (void)mavLogError:(NSString *)arg1;
- (void)mavLogWarning:(NSString *)arg1;
- (void)mavLogDebug:(NSString *)arg1;
- (void)mavLogInfo:(NSString *)arg1;
@end

