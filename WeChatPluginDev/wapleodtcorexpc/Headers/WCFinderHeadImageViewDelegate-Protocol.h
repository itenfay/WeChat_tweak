//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIImage, WCFinderHeadImageView;

@protocol WCFinderHeadImageViewDelegate <NSObject>

@optional
- (void)finderHeadImageViewLoadUrlImageFailed:(WCFinderHeadImageView *)arg1;
- (void)finderHeadImageViewLoadUrlImageFinished:(WCFinderHeadImageView *)arg1 image:(UIImage *)arg2 urlString:(NSString *)arg3;
- (void)finderHeadImageViewDidClick:(WCFinderHeadImageView *)arg1;
@end

