//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString;

@protocol IMBFileSystem <NSObject>
- (NSData *)readFile:(NSString *)arg1 position:(long long)arg2 length:(long long)arg3 error:(id *)arg4;

@optional
- (NSData *)getFileDataByPath:(NSString *)arg1;
- (_Bool)accept:(NSString *)arg1;
- (_Bool)saveFile:(NSString *)arg1 specifiedPath:(NSString *)arg2 error:(id *)arg3;
- (_Bool)unzip:(NSString *)arg1 targetDirectory:(NSString *)arg2 native:(_Bool)arg3 error:(id *)arg4;
- (_Bool)rmdir:(NSString *)arg1 recursive:(_Bool)arg2 native:(_Bool)arg3 error:(id *)arg4;
- (_Bool)mkdir:(NSString *)arg1 recursive:(_Bool)arg2 error:(id *)arg3;
- (_Bool)writeFile:(NSString *)arg1 data:(NSData *)arg2 isAppend:(_Bool)arg3 error:(id *)arg4;
- (_Bool)unlink:(NSString *)arg1 error:(id *)arg2;
- (NSDictionary *)stat:(NSString *)arg1 recursive:(_Bool)arg2 error:(id *)arg3;
- (NSArray *)readDir:(NSString *)arg1 error:(id *)arg2;
- (_Bool)access:(NSString *)arg1 error:(id *)arg2;
@end

