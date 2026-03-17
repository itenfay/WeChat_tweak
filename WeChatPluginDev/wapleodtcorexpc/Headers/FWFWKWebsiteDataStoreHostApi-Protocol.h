//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSNumber;

@protocol FWFWKWebsiteDataStoreHostApi
- (void)removeDataFromDataStoreWithIdentifier:(NSNumber *)arg1 ofTypes:(NSArray *)arg2 modifiedSince:(NSNumber *)arg3 completion:(void (^)(NSNumber *, FlutterError *))arg4;
- (void)createDefaultDataStoreWithIdentifier:(NSNumber *)arg1 error:(id *)arg2;
- (void)createFromWebViewConfigurationWithIdentifier:(NSNumber *)arg1 configurationIdentifier:(NSNumber *)arg2 error:(id *)arg3;
@end

