//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol ResourceLoaderDelegate <NSObject>
- (void)loadResourceAsync:(NSString *)arg1 withRefererPolicy:(NSString *)arg2 andCallback:(void (^)(NSData *))arg3;
- (NSData *)loadResource:(NSString *)arg1 withRefererPolicy:(NSString *)arg2;
@end

