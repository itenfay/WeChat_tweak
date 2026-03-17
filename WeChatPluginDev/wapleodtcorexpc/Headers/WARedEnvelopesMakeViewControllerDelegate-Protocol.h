//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WARedEnvelopesMakeViewControllerDelegate <NSObject>
- (void)onWARedEnvelopesMakeViewControllerComplete:(NSString *)arg1;
- (void)onWARedEnvelopesMakeViewControllerError:(NSString *)arg1 errCode:(long long)arg2;
- (void)onWARedEnvelopesMakeViewControllerBack;
@end

