//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, WCFinderTopicInfo;
@protocol WCFinderFavListDetailViewModelDelegate;

@interface WCFinderFavListDetailViewModel : NSObject
{
    _Bool _stopFetchData;
    _Bool _queryContinueFlag;
    unsigned long long _refreshTime;
    id <WCFinderFavListDetailViewModelDelegate> _delegate;
    NSMutableArray *_allSearchDataItems;
    WCFinderTopicInfo *_topicInfo;
    NSData *_lastBuffer;
}

+ (id)initWithLastBuffer:(id)arg1 topicInfo:(id)arg2 queryContinueFlag:(_Bool)arg3 dataSources:(id)arg4 commentScene:(int)arg5;
- (void).cxx_destruct;
@property(nonatomic) _Bool queryContinueFlag; // @synthesize queryContinueFlag=_queryContinueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) WCFinderTopicInfo *topicInfo; // @synthesize topicInfo=_topicInfo;
@property(nonatomic) _Bool stopFetchData; // @synthesize stopFetchData=_stopFetchData;
@property(retain, nonatomic) NSMutableArray *allSearchDataItems; // @synthesize allSearchDataItems=_allSearchDataItems;
@property(nonatomic) __weak id <WCFinderFavListDetailViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
- (int)feedViewControllerScene;
- (void)delContentVM:(id)arg1;
- (long long)numberOfSection;
- (long long)contentIndexOfTid:(id)arg1;
- (_Bool)isNoMoreData;
- (void)onQueryNextPageDataItems;
- (id)contentVMWithTid:(id)arg1;
- (id)searchDataItemAtSection:(long long)arg1;
- (id)searchDataItemAtIndexPath:(id)arg1;

@end

