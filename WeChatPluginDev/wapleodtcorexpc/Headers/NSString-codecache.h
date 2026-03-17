//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSString.h>

@interface NSString (codecache)
- (void)setCodeCacheDetail:(id)arg1;
- (id)codeCacheDetail;
- (void)setByteCodeIdentifier:(id)arg1;
- (id)byteCodeIdentifier;
- (void)setByteCodeDirPath:(id)arg1;
- (id)byteCodeDirPath;
- (unsigned long long)byteCodeSwitchType;
- (void)setByteCodeSwitchType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

