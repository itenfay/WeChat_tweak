//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSSet;

@interface FBSDKEventBindingManager : NSObject
{
    _Bool isStarted;
    NSMutableDictionary *reactBindings;
    NSSet *validClasses;
    _Bool hasReactNative;
    NSArray *eventBindings;
}

+ (id)parseArray:(id)arg1;
- (void).cxx_destruct;
- (void)updateBindings:(id)arg1;
- (void)matchView:(id)arg1 delegate:(id)arg2;
- (void)matchSubviewsIn:(id)arg1;
- (void)rematchBindings;
- (void)start;
- (id)initWithJSON:(id)arg1;
- (id)init;

@end

