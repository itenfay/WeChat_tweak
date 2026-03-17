//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface JSC2Util : NSObject
{
}

+ (_Bool)isScriptLengthCanBeCachedWithLength:(unsigned int)arg1;
+ (_Bool)isScriptLengthCanBeCached:(id)arg1;
+ (void)codeCacheSource:(id)arg1 setCodeCacheDetail:(id)arg2;
+ (id)codeCacheSourceCodeCacheDetail:(id)arg1;
+ (void)codeCacheSource:(id)arg1 setByteCodeIdentifier:(id)arg2;
+ (id)codeCacheSourceByteCodeIdentifier:(id)arg1;
+ (id)codeCacheSourceByteCodeDirPath:(id)arg1;
+ (void)codeCacheSource:(id)arg1 setByteCodeDirPath:(id)arg2;
+ (unsigned long long)codeCacheSourceByteCodeSwitchType:(id)arg1;
+ (void)codeCacheSource:(id)arg1 setByteCodeSwitchType:(unsigned long long)arg2;
+ (void)clearAllCodeCache;
+ (void)reportWithKey:(unsigned long long)arg1;
+ (unsigned long long)byteCodeSwitchTypeForJSVM:(id)arg1;
+ (void)setByteCodeSwitch:(unsigned long long)arg1 forJSVM:(id)arg2;
+ (unsigned long long)byteCodeSwitchTypeForJSContext:(id)arg1;
+ (void)setByteCodeSwitch:(unsigned long long)arg1 forJSContext:(id)arg2;
+ (id)byteCodeDirPathForJSContext:(id)arg1;
+ (void)setByteCodeDirPath:(id)arg1 forJSContext:(id)arg2;
+ (id)byteCodeDirPathForJSVM:(id)arg1;
+ (void)setByteCodeDirPath:(id)arg1 forJSVM:(id)arg2;
+ (void)hook;
+ (void)setUseAutorelease:(_Bool)arg1;
+ (_Bool)isCEvaluateJSScriptEnable;
+ (void)setCEvaluateJSScriptEnable:(_Bool)arg1;
+ (_Bool)isBytecodeEnable;
+ (void)setBytecodeEnable:(_Bool)arg1;
+ (void)addOptions:(unsigned int)arg1;
+ (void)setOptions:(unsigned int)arg1;
+ (unsigned int)engineOptions;
+ (_Bool)isEnable;
+ (void)setEnable:(_Bool)arg1;

@end

