//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FlutterStandardTypedData, NSString;

@protocol FlutterHostAssetHost
- (NSString *)loadStringKey:(NSString *)arg1 cache:(_Bool)arg2 error:(id *)arg3;
- (FlutterStandardTypedData *)loadKey:(NSString *)arg1 error:(id *)arg2;
@end

