//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCFinderBaseCgi;

@interface FetchingRecommendTask : NSObject
{
    unsigned long long _scene;
    unsigned long long _status;
    NSString *_tid;
    WCFinderBaseCgi *_fetchRelatedListCgi;
    NSArray *_fetchRelatedList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *fetchRelatedList; // @synthesize fetchRelatedList=_fetchRelatedList;
@property(retain, nonatomic) WCFinderBaseCgi *fetchRelatedListCgi; // @synthesize fetchRelatedListCgi=_fetchRelatedListCgi;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void)clean;
- (id)description;

@end

