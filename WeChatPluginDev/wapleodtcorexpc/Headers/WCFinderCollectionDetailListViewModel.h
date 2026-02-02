//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableSet, NSString, WCFinderGetCollectionListCGI;
@protocol WCFinderCollectionDetailListViewModelDelegate;

@interface WCFinderCollectionDetailListViewModel : NSObject
{
    _Bool _continueFlag;
    _Bool _dataFetching;
    unsigned int _businessType;
    NSString *_finderUsername;
    id <WCFinderCollectionDetailListViewModelDelegate> _delegate;
    NSMutableArray *_collectionInfoList;
    NSMutableSet *_collectionIDSet;
    NSData *_lastBuffer;
    WCFinderGetCollectionListCGI *_cgi;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int businessType; // @synthesize businessType=_businessType;
@property(retain, nonatomic) WCFinderGetCollectionListCGI *cgi; // @synthesize cgi=_cgi;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool dataFetching; // @synthesize dataFetching=_dataFetching;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSMutableSet *collectionIDSet; // @synthesize collectionIDSet=_collectionIDSet;
@property(retain, nonatomic) NSMutableArray *collectionInfoList; // @synthesize collectionInfoList=_collectionInfoList;
@property(nonatomic) __weak id <WCFinderCollectionDetailListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (void)endLoading;
- (void)startLoading;
- (id)idWithCollection:(id)arg1;
- (void)appendCollectionInfos:(id)arg1;
- (void)fetchData;
- (id)collectionInfoItems;
- (void)_setupState;
- (id)initWithUsername:(id)arg1 lastBuffer:(id)arg2 businessType:(unsigned int)arg3;
- (id)initWithUsername:(id)arg1 lastBuffer:(id)arg2;

@end

