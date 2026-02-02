//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMWebJSContextException : NSObject
{
    NSString *_contextName;
    NSString *_exceptionName;
    NSString *_message;
    NSString *_stack;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *stack; // @synthesize stack=_stack;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *exceptionName; // @synthesize exceptionName=_exceptionName;
@property(copy, nonatomic) NSString *contextName; // @synthesize contextName=_contextName;

@end

