//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;
@protocol WCFinderPOIRelatedListHalfViewModelDelegate;

@interface WCFinderPOIRelatedListHalfViewModel : NSObject
{
    _Bool _isSearchModel;
    _Bool _isContinueFlag;
    id <WCFinderPOIRelatedListHalfViewModelDelegate> _delegate;
    NSMutableArray *_allPOIDatas;
    NSString *_finderUsername;
    NSString *_searchText;
    NSData *_lastBuffer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isContinueFlag; // @synthesize isContinueFlag=_isContinueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) _Bool isSearchModel; // @synthesize isSearchModel=_isSearchModel;
@property(retain, nonatomic) NSMutableArray *allPOIDatas; // @synthesize allPOIDatas=_allPOIDatas;
@property(nonatomic) __weak id <WCFinderPOIRelatedListHalfViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSearchCancel;
- (void)onSearchAction:(id)arg1;
- (void)onBeginSearch;
- (void)fetchAction:(id)arg1;
- (_Bool)isDataEmpty;
- (_Bool)isEnableFetchNextPageData;
- (void)fetchNextPageData;
- (void)fetchFirstPageData;
- (long long)numberOfRows;
- (id)snsPOIDetailAtIndex:(long long)arg1;
- (id)initWithFinderUserName:(id)arg1;

@end

