//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSMutableDictionary, NSString, UIImage;

@protocol MMImageLoaderObserver <NSObject>

@optional
- (void)ImageDidFail:(NSString *)arg1;
- (void)ImageDidLoadWithData:(NSData *)arg1 Url:(NSString *)arg2 extraInfo:(NSMutableDictionary *)arg3;
- (void)ImageDidLoadWithData:(NSData *)arg1 Url:(NSString *)arg2;
- (void)ImageDidLoad:(UIImage *)arg1 Url:(NSString *)arg2 extraInfo:(NSMutableDictionary *)arg3;
- (void)ImageDidLoad:(UIImage *)arg1 Url:(NSString *)arg2;
@end

