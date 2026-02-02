//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FWFInstanceManager;

@interface FWFHTTPCookieStoreHostApiImpl : NSObject
{
    FWFInstanceManager *_instanceManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FWFInstanceManager *instanceManager; // @synthesize instanceManager=_instanceManager;
- (void)setCookieForStoreWithIdentifier:(id)arg1 cookie:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createFromWebsiteDataStoreWithIdentifier:(id)arg1 dataStoreIdentifier:(id)arg2 error:(id *)arg3;
- (id)HTTPCookieStoreForIdentifier:(id)arg1;
- (id)initWithInstanceManager:(id)arg1;

@end

