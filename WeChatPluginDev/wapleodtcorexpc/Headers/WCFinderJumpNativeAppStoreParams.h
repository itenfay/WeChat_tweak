//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCSKAdNetworkItem;

@interface WCFinderJumpNativeAppStoreParams : NSObject
{
    int _installAction;
    NSString *_installSchemeUrl;
    NSString *_uxinfo;
    NSString *_extraData;
    WCSKAdNetworkItem *_skAdItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCSKAdNetworkItem *skAdItem; // @synthesize skAdItem=_skAdItem;
@property(retain, nonatomic) NSString *extraData; // @synthesize extraData=_extraData;
@property(retain, nonatomic) NSString *uxinfo; // @synthesize uxinfo=_uxinfo;
@property(nonatomic) int installAction; // @synthesize installAction=_installAction;
@property(retain, nonatomic) NSString *installSchemeUrl; // @synthesize installSchemeUrl=_installSchemeUrl;

@end

