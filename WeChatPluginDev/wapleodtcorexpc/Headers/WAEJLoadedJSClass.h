//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface WAEJLoadedJSClass : NSObject
{
    struct OpaqueJSClass *jsClass;
    NSDictionary *constantValues;
}

@property(readonly) NSDictionary *constantValues; // @synthesize constantValues;
@property(readonly) struct OpaqueJSClass *jsClass; // @synthesize jsClass;
- (void)dealloc;
- (id)initWithJSClass:(struct OpaqueJSClass *)arg1 constantValues:(id)arg2;

@end

