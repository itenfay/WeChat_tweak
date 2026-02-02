//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class JSAPIPermissionBitSet, NSString;

@interface JSFunctionDef : NSObject
{
    SEL funcSelector;
    long long funcType;
    NSString *funcName;
    JSAPIPermissionBitSet *permissionBitset;
    long long permissionByteIndex;
    unsigned long long _runInWebViewType;
}

+ (id)FuncDefWithFunc:(id)arg1 Selector:(SEL)arg2 FuncType:(long long)arg3 PermissionByteIndex:(long long)arg4 RunInWebViewType:(unsigned long long)arg5;
+ (id)FuncDefWithFunc:(id)arg1 Selector:(SEL)arg2 FuncType:(long long)arg3 PermissionBitSet3:(unsigned int)arg4 RunInWebViewType:(unsigned long long)arg5;
+ (id)FuncDefWithFunc:(id)arg1 Selector:(SEL)arg2 FuncType:(long long)arg3 PermissionBitSet2:(unsigned int)arg4 RunInWebViewType:(unsigned long long)arg5;
+ (id)FuncDefWithFunc:(id)arg1 Selector:(SEL)arg2 FuncType:(long long)arg3 PermissionBitSet:(unsigned int)arg4 RunInWebViewType:(unsigned long long)arg5;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long runInWebViewType; // @synthesize runInWebViewType=_runInWebViewType;
@property(nonatomic) long long permissionByteIndex; // @synthesize permissionByteIndex;
@property(copy, nonatomic) JSAPIPermissionBitSet *permissionBitset; // @synthesize permissionBitset;
@property(copy, nonatomic) NSString *funcName; // @synthesize funcName;
@property(nonatomic) long long funcType; // @synthesize funcType;
@property(nonatomic) SEL funcSelector; // @synthesize funcSelector;
- (id)init;

@end

