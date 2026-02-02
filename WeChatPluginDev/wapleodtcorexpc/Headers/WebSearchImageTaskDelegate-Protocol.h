//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSURL;

@protocol WebSearchImageTaskDelegate <NSObject>
- (void)onImageFailForUrl:(NSURL *)arg1;
- (void)onImageReady:(NSData *)arg1 forUrl:(NSURL *)arg2;
@end

