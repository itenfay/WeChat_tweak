//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, WAShareAppMessageThumbImagePool;

@protocol WAShareAppMessageThumbImagePoolDelegate <NSObject>

@optional
- (void)thumbImagePool:(WAShareAppMessageThumbImagePool *)arg1 didDownloadWebImageDataFinished:(NSData *)arg2;
- (void)thumbImagePool:(WAShareAppMessageThumbImagePool *)arg1 shouldTakeSnapShotWithFromTop:(_Bool)arg2 completion:(void (^)(UIImage *))arg3;
@end

