//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <JavaScriptCore2/JSContext2.h>

@interface JSContext2 (JEnergy)
- (void)jwd_setName:(id)arg1;
- (id)jwd_initWithVirtualMachine:(id)arg1;
- (id)jwd_init;
- (id)mm_evaluateScript:(id)arg1 withSourceURL:(id)arg2;
- (void)didCreateCodeCacheForJSSCript:(id)arg1;
- (void)createCodeCacheIfNeededForJSScript:(id)arg1;
- (void)validationCodeCacheForJSSourceScript:(id)arg1 sourceURL:(id)arg2 codeCacheSource:(id)arg3;
- (id)mm_setupBytecode:(id)arg1 sourceURL:(id)arg2 inVirtualMachine:(id)arg3;
- (_Bool)byteCodeEnabledForScript:(id)arg1 codeCacheSource:(id)arg2;
- (id)codecacheDirPathForSource:(id)arg1;
- (id)cachePathForName:(id)arg1 codeCacheSource:(id)arg2;
- (id)nameForScript:(id)arg1 codeCacheSource:(id)arg2;
- (id)bytecodeMap;
@end

