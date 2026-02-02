//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FBSDKLoginCompletionParameters;
@protocol NSObject;

@interface FBSDKLoginURLCompleter : NSObject
{
    FBSDKLoginCompletionParameters *_parameters;
    id <NSObject> _observer;
    _Bool _performExplicitFallback;
}

- (void).cxx_destruct;
- (void)attemptBrowserLogIn:(id)arg1;
- (void)setErrorWithDictionary:(id)arg1;
- (void)setParametersWithDictionary:(id)arg1 appID:(id)arg2;
- (void)completeLogIn:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)initWithURLParameters:(id)arg1 appID:(id)arg2;

@end

