//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface LiteAppDynamicModuleMethodInfo : NSObject
{
    _Bool _isReturnBuffer;
    NSString *_method;
    NSMutableArray *_bufferIndexes;
    Class _returnType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) Class returnType; // @synthesize returnType=_returnType;
@property(nonatomic) _Bool isReturnBuffer; // @synthesize isReturnBuffer=_isReturnBuffer;
@property(retain, nonatomic) NSMutableArray *bufferIndexes; // @synthesize bufferIndexes=_bufferIndexes;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;

@end

