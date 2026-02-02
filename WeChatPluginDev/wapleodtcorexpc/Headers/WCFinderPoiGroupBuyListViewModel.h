//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCFinderPoiGroupBuyListOpenParams;
@protocol WCFinderPoiGroupBuyListViewModelDelegate;

@interface WCFinderPoiGroupBuyListViewModel : NSObject
{
    _Bool _hasFetchData;
    _Bool _isRequesting;
    _Bool _continueFlag;
    id <WCFinderPoiGroupBuyListViewModelDelegate> _delegate;
    WCFinderPoiGroupBuyListOpenParams *_openParams;
    NSString *_title;
    NSMutableArray *_groupBuyArray;
    NSString *_lastBuffer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(copy, nonatomic) NSString *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(nonatomic) _Bool hasFetchData; // @synthesize hasFetchData=_hasFetchData;
@property(retain, nonatomic) NSMutableArray *groupBuyArray; // @synthesize groupBuyArray=_groupBuyArray;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) WCFinderPoiGroupBuyListOpenParams *openParams; // @synthesize openParams=_openParams;
@property(nonatomic) __weak id <WCFinderPoiGroupBuyListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool hasMoreData;
- (void)requestDataWithPullType:(unsigned long long)arg1;
- (void)requestNextData;
- (void)requestDataFromTop;
- (id)initWithOpenParams:(id)arg1;

@end

