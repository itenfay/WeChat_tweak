//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCSKAdNetworkItem;

@interface WebStorePreloadParam : NSObject
{
    NSString *_url;
    WCSKAdNetworkItem *_adItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCSKAdNetworkItem *adItem; // @synthesize adItem=_adItem;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;

@end

