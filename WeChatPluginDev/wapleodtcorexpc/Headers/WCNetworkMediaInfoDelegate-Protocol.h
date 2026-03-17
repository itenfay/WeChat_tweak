//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, NSString;

@protocol WCNetworkMediaInfoDelegate <NSObject>
- (void)onGotVideoUrl:(NSString *)arg1 Error:(NSError *)arg2;
@end

