//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveCDNLivePreloader, NSError, NSString;

@protocol MMLiveCDNLivePreloaderDelegate <NSObject>
- (void)liveCDNPreloader:(MMLiveCDNLivePreloader *)arg1 didFailPreloadUrl:(NSString *)arg2 error:(NSError *)arg3;
- (void)liveCDNPreloader:(MMLiveCDNLivePreloader *)arg1 didFinishPreloadUrl:(NSString *)arg2;
@end

