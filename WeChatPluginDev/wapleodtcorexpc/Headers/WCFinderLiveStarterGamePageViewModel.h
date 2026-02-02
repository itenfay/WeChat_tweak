//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveGameCategoryInfo;
@protocol WCFinderLiveStarterGamePageViewModelDelegate;

@interface WCFinderLiveStarterGamePageViewModel : NSObject
{
    _Bool _hasFetchData;
    _Bool _isFetchingData;
    MMFinderLiveGameCategoryInfo *_tabInfo;
    unsigned long long _state;
    id <WCFinderLiveStarterGamePageViewModelDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderLiveStarterGamePageViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(nonatomic) _Bool hasFetchData; // @synthesize hasFetchData=_hasFetchData;
@property(retain, nonatomic) MMFinderLiveGameCategoryInfo *tabInfo; // @synthesize tabInfo=_tabInfo;
- (void)fetchMoreDataWithFetchMore:(_Bool)arg1;
- (id)getCurrentGameCategoryInfo;
- (void)updateState;
- (id)initWithTabInfo:(id)arg1 delegate:(id)arg2;

@end

