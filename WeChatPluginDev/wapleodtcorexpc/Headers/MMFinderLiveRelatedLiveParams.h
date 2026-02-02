//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveRelatedExtInfo, NSArray;

@interface MMFinderLiveRelatedLiveParams : NSObject
{
    unsigned long long _liveId;
    NSArray *_relatedLiveContentVMs;
    FinderLiveRelatedExtInfo *_relatedExtInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveRelatedExtInfo *relatedExtInfo; // @synthesize relatedExtInfo=_relatedExtInfo;
@property(retain, nonatomic) NSArray *relatedLiveContentVMs; // @synthesize relatedLiveContentVMs=_relatedLiveContentVMs;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
- (id)description;

@end

