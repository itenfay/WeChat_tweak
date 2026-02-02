//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderRedDotExtInfo, WCFinderRedDotCtrlInfo;

@interface MMFinderLiveDiscoveryHomePagePrefetchParams : NSObject
{
    _Bool _isHomePageVCCached;
    unsigned long long _prefetchType;
    WCFinderRedDotCtrlInfo *_redDotCtrlInfo;
    FinderRedDotExtInfo *_redDotExtInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderRedDotExtInfo *redDotExtInfo; // @synthesize redDotExtInfo=_redDotExtInfo;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *redDotCtrlInfo; // @synthesize redDotCtrlInfo=_redDotCtrlInfo;
@property(nonatomic) _Bool isHomePageVCCached; // @synthesize isHomePageVCCached=_isHomePageVCCached;
@property(nonatomic) unsigned long long prefetchType; // @synthesize prefetchType=_prefetchType;

@end

