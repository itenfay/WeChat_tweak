//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FLTSharedPreferencesPlugin : NSObject
{
}

+ (void)registerWithRegistrar:(id)arg1;
- (void)setValueKey:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (void)setDoubleKey:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (void)setBoolKey:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (void)removeKey:(id)arg1 error:(id *)arg2;
- (void)clearWithError:(id *)arg1;
- (id)getAllWithError:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

