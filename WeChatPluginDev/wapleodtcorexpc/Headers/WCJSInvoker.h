//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCJSInvoker : NSObject
{
    NSString *_javascript;
    NSString *_invokeObject;
    NSString *_invokeFunc;
    NSArray *_invokeArgs;
    CDUnknownBlockType _completionBlock;
    NSString *_debugString;
}

+ (id)safeArray:(id)arg1;
+ (id)safeDictionary:(id)arg1;
+ (id)safeString:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *debugString; // @synthesize debugString=_debugString;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSArray *invokeArgs; // @synthesize invokeArgs=_invokeArgs;
@property(retain, nonatomic) NSString *invokeFunc; // @synthesize invokeFunc=_invokeFunc;
@property(retain, nonatomic) NSString *invokeObject; // @synthesize invokeObject=_invokeObject;
@property(retain, nonatomic) NSString *javascript; // @synthesize javascript=_javascript;
- (void)invoke4ParamInWebview:(id)arg1;
- (void)invoke3ParamInWebview:(id)arg1;
- (void)invoke2ParamInWebview:(id)arg1;
- (void)invoke1ParamInWebview:(id)arg1;
- (void)invoke0ParamInWebview:(id)arg1;
- (void)invokeNParamInWebview:(id)arg1;
- (void)invokeInWebview:(id)arg1;
- (id)invokeInJsContext:(id)arg1;
@property(readonly, nonatomic) NSString *finalJavascript;
- (id)initWithObj:(id)arg1 Func:(id)arg2 Args:(id)arg3;
- (id)initWithJavascript:(id)arg1;

@end

