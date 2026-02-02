//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCSightLoaderObserver <NSObject>

@optional
- (void)SightDidFailForUrl:(NSString *)arg1;
- (void)SightDidLoad:(NSString *)arg1 Url:(NSString *)arg2;
- (void)SightDidReceiveProgress:(double)arg1 Url:(NSString *)arg2;
- (void)SightWillBeginLoadForUrl:(NSString *)arg1;
@end

