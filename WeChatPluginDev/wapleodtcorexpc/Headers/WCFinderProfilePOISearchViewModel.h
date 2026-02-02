//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString, WCFinderPOIParamsModel;
@protocol WCFinderProfilePOISearchViewModelDelegate;

@interface WCFinderProfilePOISearchViewModel : NSObject
{
    _Bool _isSearchModel;
    _Bool _continueFlag;
    int _viewScene;
    id <WCFinderProfilePOISearchViewModelDelegate> _delegate;
    NSMutableArray *_allInfos;
    NSString *_finderUsername;
    WCFinderPOIParamsModel *_poiParamsModel;
    NSData *_lastBuffer;
    NSMutableArray *_searchInfos;
    NSMutableArray *_relativeInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *relativeInfos; // @synthesize relativeInfos=_relativeInfos;
@property(retain, nonatomic) NSMutableArray *searchInfos; // @synthesize searchInfos=_searchInfos;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) WCFinderPOIParamsModel *poiParamsModel; // @synthesize poiParamsModel=_poiParamsModel;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) int viewScene; // @synthesize viewScene=_viewScene;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSMutableArray *allInfos; // @synthesize allInfos=_allInfos;
@property(nonatomic) _Bool isSearchModel; // @synthesize isSearchModel=_isSearchModel;
@property(nonatomic) __weak id <WCFinderProfilePOISearchViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchDataWithLastBuffer:(id)arg1;
- (void)fetchNextPageData;
- (void)fetchFirstPageData;
- (void)searchPOIWithQuery:(id)arg1;
- (_Bool)isAuthor;
- (id)initWithFinderUsername:(id)arg1;

@end

