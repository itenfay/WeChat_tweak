//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderCollectionHalfViewParams, WCFinderFeedArray;
@protocol WCFinderCollectionFeedListProvider;

@interface WCFinderCollectionFeedListViewModel : NSObject
{
    WCFinderCollectionHalfViewParams *_params;
    id <WCFinderCollectionFeedListProvider> _provider;
}

+ (id)viewModelWithParams:(id)arg1 provider:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id <WCFinderCollectionFeedListProvider> provider; // @synthesize provider=_provider;
@property(retain, nonatomic) WCFinderCollectionHalfViewParams *params; // @synthesize params=_params;
@property(readonly, nonatomic) WCFinderFeedArray *feedArray;
- (void)replaceProvider:(id)arg1;
- (id)sectionSnapshot;
- (id)dataSnapshot;

@end

