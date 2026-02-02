//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedArray;
@protocol WCFinderFeedFlowViewAdapterDataSourceDelegate;

@interface WCFinderFeedFlowViewFeedArrayDataSource : NSObject
{
    id <WCFinderFeedFlowViewAdapterDataSourceDelegate> _delegate;
    WCFinderFeedArray *_feedArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedArray *feedArray; // @synthesize feedArray=_feedArray;
@property(nonatomic) __weak id <WCFinderFeedFlowViewAdapterDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)finderFeedFlowView:(id)arg1 indexPathOfTid:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (id)feedIndexPathForTid:(id)arg1;
- (long long)feedIndexAtFeedArray:(id)arg1;
- (id)feedAtIndexPath:(id)arg1;
- (id)getFeedArray;
- (_Bool)isEmpty;
- (void)_onDataChanged;
- (void)release:(id)arg1;
- (void)observeChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

