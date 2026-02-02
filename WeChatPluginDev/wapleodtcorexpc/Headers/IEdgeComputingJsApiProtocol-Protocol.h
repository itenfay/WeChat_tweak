//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class JSContext, NSArray, NSString;

@protocol IEdgeComputingJsApiProtocol <NSObject>
- (void)clear;
- (unsigned int)getType;
- (NSString *)functionName;
- (id)logic:(NSArray *)arg1;
- (_Bool)registerIntoContext:(JSContext *)arg1;
@end

