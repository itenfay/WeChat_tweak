//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class JSC2CodeCacheDetail, NSString;

@protocol IJSC2CodeCacheSource <NSObject>
- (void)setCodeCacheDetail:(JSC2CodeCacheDetail *)arg1;
- (JSC2CodeCacheDetail *)codeCacheDetail;
- (void)setByteCodeIdentifier:(NSString *)arg1;
- (NSString *)byteCodeIdentifier;
- (NSString *)byteCodeDirPath;
- (void)setByteCodeDirPath:(NSString *)arg1;
- (unsigned long long)byteCodeSwitchType;
- (void)setByteCodeSwitchType:(unsigned long long)arg1;
@end

