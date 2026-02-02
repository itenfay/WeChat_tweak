//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface FBSDKSwizzle : NSObject
{
    unsigned int _numArgs;
    Class _class;
    SEL _selector;
    CDUnknownFunctionPointerType _originalMethod;
    NSMapTable *_blocks;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSMapTable *blocks; // @synthesize blocks=_blocks;
@property(nonatomic) unsigned int numArgs; // @synthesize numArgs=_numArgs;
@property(nonatomic) CDUnknownFunctionPointerType originalMethod; // @synthesize originalMethod=_originalMethod;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) Class class; // @synthesize class=_class;
- (id)description;
- (id)initWithBlock:(CDUnknownBlockType)arg1 named:(id)arg2 forClass:(Class)arg3 selector:(SEL)arg4 originalMethod:(CDUnknownFunctionPointerType)arg5 withNumArgs:(unsigned int)arg6;
- (id)init;

@end

