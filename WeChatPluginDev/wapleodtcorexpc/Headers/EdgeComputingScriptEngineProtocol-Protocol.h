//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol EdgeComputingScriptEngineProtocol <NSObject>
- (void)clear;
- (NSArray *)executeArrayFunction:(NSString *)arg1 withData:(NSString *)arg2 withArgs:(NSString *)arg3;
- (long long)executeLongFunction:(NSString *)arg1 withData:(NSString *)arg2 withArgs:(NSString *)arg3;
- (int)executeIntFunction:(NSString *)arg1 withData:(NSString *)arg2 withArgs:(NSString *)arg3;
- (NSString *)executeStringFunction:(NSString *)arg1 withData:(NSString *)arg2 withArgs:(NSString *)arg3;
- (_Bool)loadScript:(NSString *)arg1;
- (void)registerJsApi;
@end

