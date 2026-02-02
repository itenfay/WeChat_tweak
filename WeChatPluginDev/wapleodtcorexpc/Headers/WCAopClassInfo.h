//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, WCAopBlockImp, WCAopLock;

@interface WCAopClassInfo : NSObject
{
    _Bool _returnValueOnStack;
    _Bool _isClassMethod;
    NSArray *_beforeActions;
    WCAopBlockImp *_replaceBlock;
    NSArray *_afterActions;
    unsigned long long _frameLength;
    unsigned long long _instanceCount;
    NSArray *_parameterInfo;
    CDUnknownFunctionPointerType _originIMP;
    Class _currentClass;
    Class _metaClass;
    const char *_methodType;
    WCAopLock *_classLock;
    struct WCAopIMP *_aopIMP;
    SEL _selector;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isClassMethod; // @synthesize isClassMethod=_isClassMethod;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) struct WCAopIMP *aopIMP; // @synthesize aopIMP=_aopIMP;
@property(nonatomic) __weak WCAopLock *classLock; // @synthesize classLock=_classLock;
@property(nonatomic) const char *methodType; // @synthesize methodType=_methodType;
@property(nonatomic) __weak Class metaClass; // @synthesize metaClass=_metaClass;
@property(nonatomic) __weak Class currentClass; // @synthesize currentClass=_currentClass;
@property(nonatomic) CDUnknownFunctionPointerType originIMP; // @synthesize originIMP=_originIMP;
@property(retain, nonatomic) NSArray *parameterInfo; // @synthesize parameterInfo=_parameterInfo;
@property(nonatomic) _Bool returnValueOnStack; // @synthesize returnValueOnStack=_returnValueOnStack;
@property(nonatomic) unsigned long long instanceCount; // @synthesize instanceCount=_instanceCount;
@property(nonatomic) unsigned long long frameLength; // @synthesize frameLength=_frameLength;
@property(retain, nonatomic) NSArray *afterActions; // @synthesize afterActions=_afterActions;
@property(retain, nonatomic) WCAopBlockImp *replaceBlock; // @synthesize replaceBlock=_replaceBlock;
@property(retain, nonatomic) NSArray *beforeActions; // @synthesize beforeActions=_beforeActions;
- (_Bool)isClear;

@end

