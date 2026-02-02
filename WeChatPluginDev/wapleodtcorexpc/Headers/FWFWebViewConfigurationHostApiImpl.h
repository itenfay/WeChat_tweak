//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FWFInstanceManager;

@interface FWFWebViewConfigurationHostApiImpl : NSObject
{
    FWFInstanceManager *_instanceManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FWFInstanceManager *instanceManager; // @synthesize instanceManager=_instanceManager;
- (void)setMediaTypesRequiresUserActionForConfigurationWithIdentifier:(id)arg1 forTypes:(id)arg2 error:(id *)arg3;
- (void)setAllowsInlineMediaPlaybackForConfigurationWithIdentifier:(id)arg1 isAllowed:(id)arg2 error:(id *)arg3;
- (void)createFromWebViewWithIdentifier:(id)arg1 webViewIdentifier:(id)arg2 error:(id *)arg3;
- (void)createWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)webViewConfigurationForIdentifier:(id)arg1;
- (id)initWithInstanceManager:(id)arg1;

@end

