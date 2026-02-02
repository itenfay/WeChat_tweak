//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedGroup;
@protocol WCFinderFeedFlowViewAdapterDataSourceDelegate;

@interface WCFinderFeedFlowViewFeedGroupDataSource : NSObject
{
    id <WCFinderFeedFlowViewAdapterDataSourceDelegate> _delegate;
    WCFinderFeedGroup *_feedGroup;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedGroup *feedGroup; // @synthesize feedGroup=_feedGroup;
@property(nonatomic) __weak id <WCFinderFeedFlowViewAdapterDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowView:(id)arg1 customSupplementaryViewOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowView:(id)arg1 indexPathOfTid:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (_Bool)shouldPinSectionHeader:(long long)arg1;
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

