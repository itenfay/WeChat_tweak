//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSNumber;

@protocol FWFWKWebViewConfigurationHostApi
- (void)setMediaTypesRequiresUserActionForConfigurationWithIdentifier:(NSNumber *)arg1 forTypes:(NSArray *)arg2 error:(id *)arg3;
- (void)setAllowsInlineMediaPlaybackForConfigurationWithIdentifier:(NSNumber *)arg1 isAllowed:(NSNumber *)arg2 error:(id *)arg3;
- (void)createFromWebViewWithIdentifier:(NSNumber *)arg1 webViewIdentifier:(NSNumber *)arg2 error:(id *)arg3;
- (void)createWithIdentifier:(NSNumber *)arg1 error:(id *)arg2;
@end

