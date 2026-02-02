//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@protocol FlutterFileHost
- (NSString *)getStreamProfilerDirectoryRelease:(_Bool)arg1 error:(id *)arg2;
- (NSString *)getRealPathPath:(NSString *)arg1 error:(id *)arg2;
- (void)createDirectoryPath:(NSString *)arg1 recursive:(_Bool)arg2 completion:(void (^)(NSString *, FlutterError *))arg3;
- (void)createFilePath:(NSString *)arg1 completion:(void (^)(NSString *, FlutterError *))arg2;
- (NSString *)getGeneralCacheDirectoryWithError:(id *)arg1;
- (NSString *)getDefaultImageCacheDirectoryWithError:(id *)arg1;
@end

