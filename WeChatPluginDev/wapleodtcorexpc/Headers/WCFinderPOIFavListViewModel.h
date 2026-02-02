//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString, WCFinderListLoadingStateModel;
@protocol WCFinderPOIFavListViewModelDelegate;

@interface WCFinderPOIFavListViewModel : NSObject
{
    id <WCFinderPOIFavListViewModelDelegate> _delegate;
    WCFinderListLoadingStateModel *_loadingModel;
    NSMutableArray *_poiItems;
    NSMutableArray *_unfavPOIItems;
    NSData *_lastBuffer;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSMutableArray *unfavPOIItems; // @synthesize unfavPOIItems=_unfavPOIItems;
@property(retain, nonatomic) NSMutableArray *poiItems; // @synthesize poiItems=_poiItems;
@property(retain, nonatomic) WCFinderListLoadingStateModel *loadingModel; // @synthesize loadingModel=_loadingModel;
@property(nonatomic) __weak id <WCFinderPOIFavListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (unsigned long long)dataCount;
- (id)dataWithIndex:(unsigned long long)arg1;
- (_Bool)dataEmpty;
- (void)fetchData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

