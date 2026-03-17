//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (BaseFile)
+ (void)load;
- (id)swizzleURLForDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 appropriateForURL:(id)arg3 create:(_Bool)arg4 error:(id *)arg5;
@end

