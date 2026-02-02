//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EntertainmentChannelsTagDataModel, NSString, WCFinderFeedFlowView, WCFinderLiveEntertainmentChannelsContext;
@protocol WCFinderLiveEntertainmentChannelsTagStreamVMDelegate;

@interface WCFinderLiveEntertainmentChannelsTagStreamVM : NSObject
{
    id <WCFinderLiveEntertainmentChannelsTagStreamVMDelegate> _delegate;
    unsigned long long _state;
    unsigned long long _refreshTime;
    EntertainmentChannelsTagDataModel *_dataModel;
    WCFinderFeedFlowView *_feedFlowView;
    WCFinderLiveEntertainmentChannelsContext *_ctx;
    NSString *_themeTag;
    unsigned long long _containerId;
}

+ (void)saveDataItemAndExtraInfosWithContainerModels:(id)arg1 commentScene:(int)arg2 extraKey:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long containerId; // @synthesize containerId=_containerId;
@property(retain, nonatomic) NSString *themeTag; // @synthesize themeTag=_themeTag;
@property(retain, nonatomic) WCFinderLiveEntertainmentChannelsContext *ctx; // @synthesize ctx=_ctx;
@property(nonatomic) __weak WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(retain, nonatomic) EntertainmentChannelsTagDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <WCFinderLiveEntertainmentChannelsTagStreamVMDelegate> delegate; // @synthesize delegate=_delegate;
- (id)currentContainerReadIds;
- (id)currentContainerLastBuffer;
- (void)removeDataWithTid:(id)arg1;
- (unsigned long long)indexOfTid:(id)arg1;
- (id)feedVMAtIndexPath:(id)arg1;
- (void)updateState;
@property(readonly, nonatomic) _Bool isFetchingData;
@property(readonly, nonatomic) _Bool continueFlag;
- (id)createFeedVMWithModel:(id)arg1;
- (void)fetchMoreDataWithPullType:(unsigned long long)arg1;
- (void)refreshDataFromTop;
- (void)fetchMoreData;
- (unsigned long long)numberOfItems;
- (_Bool)hasNoData;
- (void)cancelAllCgi;
- (id)initWithContext:(id)arg1 tag:(id)arg2 initialContainer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

