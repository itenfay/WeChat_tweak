//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSNumber, NSString;

@protocol UserDefaultsApi
- (void)clearWithError:(id *)arg1;
- (NSDictionary *)getAllWithError:(id *)arg1;
- (void)setValueKey:(NSString *)arg1 value:(id)arg2 error:(id *)arg3;
- (void)setDoubleKey:(NSString *)arg1 value:(NSNumber *)arg2 error:(id *)arg3;
- (void)setBoolKey:(NSString *)arg1 value:(NSNumber *)arg2 error:(id *)arg3;
- (void)removeKey:(NSString *)arg1 error:(id *)arg2;
@end

