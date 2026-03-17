//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveStorageScanner : NSObject
{
}

+ (CDStruct_ba8037df)scanFile:(id)arg1 inDirectory:(id)arg2 withSharedFileReferences:(id)arg3 enableVerboseLogging:(_Bool)arg4;
+ (CDStruct_ba8037df)scanSubdirectory:(id)arg1 inDirectory:(id)arg2 withSharedFileReferences:(id)arg3 enableVerboseLogging:(_Bool)arg4;
+ (id)findOrCreateSubdirectoryInDirectory:(id)arg1 withName:(id)arg2 enableVerboseLogging:(_Bool)arg3;
+ (CDStruct_ba8037df)scanWithPathComponents:(id)arg1 relativeToDirectory:(id)arg2 withSharedFileReferences:(id)arg3 atLevel:(unsigned long long)arg4 enableVerboseLogging:(_Bool)arg5;
+ (id)scanPaths:(id)arg1 enableVerboseLogging:(_Bool)arg2;

@end

