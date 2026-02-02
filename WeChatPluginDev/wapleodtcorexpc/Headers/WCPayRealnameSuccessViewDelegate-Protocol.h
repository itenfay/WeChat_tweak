//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCPayRealnameSuccessViewDelegate <NSObject>
- (void)onWCPayRealnameSuccessViewOpenTinyapp:(NSString *)arg1 path:(NSString *)arg2;
- (void)onWCPayRealnameSuccessViewOpenUrl:(NSString *)arg1;
- (void)onWCPayRealnameSuccessViewNeedCloseAndOpenUrl:(NSString *)arg1;
- (void)onWCPayRealnameSuccessViewRetry;
- (void)onWCPayRealnameSuccessViewDone;
@end

