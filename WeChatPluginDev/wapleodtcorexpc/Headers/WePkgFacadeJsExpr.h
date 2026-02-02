//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableString;

@interface WePkgFacadeJsExpr : NSObject
{
    NSMutableString *_jsScript;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableString *jsScript; // @synthesize jsScript=_jsScript;
- (void)appendString:(id)arg1;
- (void)jsVar:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)timeFromDomLoadingExpr;
- (id)safeAccessSubVarExpr:(id)arg1;
- (void)createIntermediateObjectIfNeed:(id)arg1;
- (id)init;

@end

