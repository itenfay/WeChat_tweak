//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedContentVM;
@protocol WCFinderFollowTabDetailVMDelegate;

@interface WCFinderFollowTabDetailBaseViewModel : NSObject
{
    _Bool _postFeedInsertMachineTab;
    id <WCFinderFollowTabDetailVMDelegate> _delegate;
    WCFinderFeedContentVM *_preVCData;
    NSString *_noMoreDataTips;
    NSString *_noDataTips;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *noDataTips; // @synthesize noDataTips=_noDataTips;
@property(copy, nonatomic) NSString *noMoreDataTips; // @synthesize noMoreDataTips=_noMoreDataTips;
@property(nonatomic) _Bool postFeedInsertMachineTab; // @synthesize postFeedInsertMachineTab=_postFeedInsertMachineTab;
@property(retain, nonatomic) WCFinderFeedContentVM *preVCData; // @synthesize preVCData=_preVCData;
@property(nonatomic) __weak id <WCFinderFollowTabDetailVMDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)enableShowPostStateFeed;
- (_Bool)shouldShowUploadDataItem:(id)arg1;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (int)commentScene;
- (void)updateUploadingDataItem:(id)arg1;
- (void)fetchNextPageData;
- (void)fetchFirstPageData;
- (void)deleteContentVM:(id)arg1;
- (id)contentVMOfTid:(id)arg1;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (long long)indexOfTid:(id)arg1;
- (unsigned long long)allDataCount;
- (_Bool)hasMoreData;
- (_Bool)hasFetchFirstPageData;
- (_Bool)needFetchFirstPageData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

