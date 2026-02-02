//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderPaidCollectionInfo;
@protocol WCFinderCollectionFeedListProvider;

@interface WCFinderPaidCollectionDetailVM : NSObject
{
    id <WCFinderCollectionFeedListProvider> _collectionDataProvider;
    FinderPaidCollectionInfo *_paidCollection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderPaidCollectionInfo *paidCollection; // @synthesize paidCollection=_paidCollection;
@property(retain, nonatomic) id <WCFinderCollectionFeedListProvider> collectionDataProvider; // @synthesize collectionDataProvider=_collectionDataProvider;
- (id)dataSnapshot;
- (void)resetDataProvider;
- (id)initWithPaidCollection:(id)arg1;

@end

