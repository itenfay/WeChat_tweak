//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FWFInstanceManager;

@interface FWFPreferencesHostApiImpl : NSObject
{
    FWFInstanceManager *_instanceManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FWFInstanceManager *instanceManager; // @synthesize instanceManager=_instanceManager;
- (void)setJavaScriptEnabledForPreferencesWithIdentifier:(id)arg1 isEnabled:(id)arg2 error:(id *)arg3;
- (void)createFromWebViewConfigurationWithIdentifier:(id)arg1 configurationIdentifier:(id)arg2 error:(id *)arg3;
- (void)createWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)preferencesForIdentifier:(id)arg1;
- (id)initWithInstanceManager:(id)arg1;

@end

