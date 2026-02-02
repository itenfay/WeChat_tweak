//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMFinderGameLiveWelfareCollectionViewModel : NSObject
{
    _Bool _isNotScrolling;
    NSArray *_cellViewModelArr;
    double _collectionViewWidth;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNotScrolling; // @synthesize isNotScrolling=_isNotScrolling;
@property(nonatomic) double collectionViewWidth; // @synthesize collectionViewWidth=_collectionViewWidth;
@property(retain, nonatomic) NSArray *cellViewModelArr; // @synthesize cellViewModelArr=_cellViewModelArr;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)updateModel:(id)arg1;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

