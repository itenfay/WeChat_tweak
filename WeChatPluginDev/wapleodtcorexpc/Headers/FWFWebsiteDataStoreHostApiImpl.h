//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FWFInstanceManager;

@interface FWFWebsiteDataStoreHostApiImpl : NSObject
{
    FWFInstanceManager *_instanceManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FWFInstanceManager *instanceManager; // @synthesize instanceManager=_instanceManager;
- (void)removeDataFromDataStoreWithIdentifier:(id)arg1 ofTypes:(id)arg2 modifiedSince:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createDefaultDataStoreWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)createFromWebViewConfigurationWithIdentifier:(id)arg1 configurationIdentifier:(id)arg2 error:(id *)arg3;
- (id)websiteDataStoreForIdentifier:(id)arg1;
- (id)initWithInstanceManager:(id)arg1;

@end

