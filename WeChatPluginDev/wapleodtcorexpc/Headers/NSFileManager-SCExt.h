//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (SCExt)
- (_Bool)sc_performFileOperation:(unsigned long long)arg1 forItemAtPath:(id)arg2 toPath:(id)arg3 overwrite:(_Bool)arg4 error:(id *)arg5;
- (_Bool)sc_linkItemAtPath:(id)arg1 toPath:(id)arg2 overwrite:(_Bool)arg3 error:(id *)arg4;
- (_Bool)sc_linkItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (_Bool)sc_moveItemAtPath:(id)arg1 toPath:(id)arg2 overwrite:(_Bool)arg3 error:(id *)arg4;
- (_Bool)sc_moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (_Bool)sc_copyItemAtPath:(id)arg1 toPath:(id)arg2 overwrite:(_Bool)arg3 error:(id *)arg4;
- (_Bool)sc_copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
@end

