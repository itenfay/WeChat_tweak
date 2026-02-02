//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderMusicTopicDataProvider;
@protocol WCFinderTingAlbumViewModelDelegate;

@interface WCFinderTingAlbumViewModel : NSObject
{
    int _innerType;
    id <WCFinderTingAlbumViewModelDelegate> _delegate;
    WCFinderMusicTopicDataProvider *_dataProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMusicTopicDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic) __weak id <WCFinderTingAlbumViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int innerType; // @synthesize innerType=_innerType;
- (id)getDetailListViewModel;
- (id)loadingState;
- (id)contentVMAtItem:(long long)arg1;
- (long long)numberOfItems;
- (void)requestNextPage;
- (void)onMusicDataProviderFetchSuc:(int)arg1;
- (id)initWithDataProvider:(id)arg1 innerType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

