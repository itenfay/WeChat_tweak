//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FWFNSHttpCookieData, NSNumber;

@protocol FWFWKHttpCookieStoreHostApi
- (void)setCookieForStoreWithIdentifier:(NSNumber *)arg1 cookie:(FWFNSHttpCookieData *)arg2 completion:(void (^)(FlutterError *))arg3;
- (void)createFromWebsiteDataStoreWithIdentifier:(NSNumber *)arg1 dataStoreIdentifier:(NSNumber *)arg2 error:(id *)arg3;
@end

