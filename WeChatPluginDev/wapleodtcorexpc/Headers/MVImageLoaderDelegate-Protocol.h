//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MVImageLoader, NSString, UIImage;

@protocol MVImageLoaderDelegate <NSObject>
- (void)imageLoader:(MVImageLoader *)arg1 didLoadImage:(UIImage *)arg2 urlString:(NSString *)arg3;
@end

