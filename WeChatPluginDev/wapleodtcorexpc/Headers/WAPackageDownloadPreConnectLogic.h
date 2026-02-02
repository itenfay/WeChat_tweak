//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAPackageDownloadPreConnectLogic : NSObject
{
    NSString *_cdnPreConnectUrl;
    unsigned long long _lastPreConnectTimeStampInSeconds;
    shared_ptr_7048591f _cb_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) shared_ptr_7048591f cb_; // @synthesize cb_=_cb_;
@property(nonatomic) unsigned long long lastPreConnectTimeStampInSeconds; // @synthesize lastPreConnectTimeStampInSeconds=_lastPreConnectTimeStampInSeconds;
@property(copy, nonatomic) NSString *cdnPreConnectUrl; // @synthesize cdnPreConnectUrl=_cdnPreConnectUrl;
- (_Bool)isReachPreConnectGap;
- (void)tryDoCdnPreConnect;
- (id)init;

@end

