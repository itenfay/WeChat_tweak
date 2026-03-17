//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSMethodSignature.h>

@interface NSMethodSignature (SCExt)
- (long long)sc_methodReturnType;
- (const char *)typeEncoding;
- (id)methodSignatureByInsertingType:(const char *)arg1 atArgumentIndex:(unsigned long long)arg2;
@end

