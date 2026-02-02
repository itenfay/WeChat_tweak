//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderDataItem, WCFinderFeedMediaWrap;

@interface WCFinderTotalVideoDownloadTask : NSObject
{
    CDUnknownBlockType _resolver;
    WCFinderDataItem *_dataItem;
    WCFinderFeedMediaWrap *_mediaWrap;
    NSString *_resolvedPath;
    NSObject *_selfHolder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject *selfHolder; // @synthesize selfHolder=_selfHolder;
@property(copy, nonatomic) NSString *resolvedPath; // @synthesize resolvedPath=_resolvedPath;
@property(retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(copy, nonatomic) CDUnknownBlockType resolver; // @synthesize resolver=_resolver;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)arg1;
- (void)dowloadTimeOut;
- (void)cancel;
- (id)downloadVideoAlone:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

