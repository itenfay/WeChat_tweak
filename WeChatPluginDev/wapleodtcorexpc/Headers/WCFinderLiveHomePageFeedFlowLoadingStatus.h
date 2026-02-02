//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderLiveHomePageFeedFlowLoadingStatus : NSObject
{
    int _loadingType;
    unsigned long long _loadingStartTimeMS;
    unsigned long long _loadingEndTimeMS;
    id _loadingContext;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id loadingContext; // @synthesize loadingContext=_loadingContext;
@property(nonatomic) int loadingType; // @synthesize loadingType=_loadingType;
@property(nonatomic) unsigned long long loadingEndTimeMS; // @synthesize loadingEndTimeMS=_loadingEndTimeMS;
@property(nonatomic) unsigned long long loadingStartTimeMS; // @synthesize loadingStartTimeMS=_loadingStartTimeMS;
- (id)description;

@end

