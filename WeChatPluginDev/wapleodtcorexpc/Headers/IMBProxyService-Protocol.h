//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol IMBProxyService <NSObject>
+ (int)getVideoDurationSec:(NSString *)arg1;
+ (UIImage *)genVideoThumbImage:(NSString *)arg1;
@end

