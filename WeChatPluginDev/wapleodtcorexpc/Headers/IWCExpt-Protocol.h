//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IWCExpt <NSObject>
+ (NSString *)valueFromDynamicConfigForKey:(NSString *)arg1;
+ (_Bool)shouldWCBlueToothForceSilentInitControl;
+ (_Bool)getExpt:(NSString *)arg1 withBoolDef:(_Bool)arg2;
+ (long long)getIntegerExpt:(NSString *)arg1 withDef:(long long)arg2;
+ (NSString *)getExpt:(NSString *)arg1 withDef:(NSString *)arg2;
@end

