//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCFinderBatchModContactTypeTask;
@protocol WCFinderAuthorityListViewModelDelegate, WCFinderAuthorityListViewModelSearchDelegate;

@interface WCFinderOutsideFriendViewModel : NSObject
{
    id <WCFinderAuthorityListViewModelDelegate> delegate;
    id <WCFinderAuthorityListViewModelSearchDelegate> searchDelegate;
    NSMutableArray *_contacts;
    WCFinderBatchModContactTypeTask *_batchContactTask;
}

+ (id)convertContact:(id)arg1;
+ (_Bool)isMyFriend:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderBatchModContactTypeTask *batchContactTask; // @synthesize batchContactTask=_batchContactTask;
@property(retain, nonatomic) NSMutableArray *contacts; // @synthesize contacts=_contacts;
@property(nonatomic) __weak id <WCFinderAuthorityListViewModelSearchDelegate> searchDelegate; // @synthesize searchDelegate;
@property(nonatomic) __weak id <WCFinderAuthorityListViewModelDelegate> delegate; // @synthesize delegate;
- (_Bool)showSearchBar;
- (_Bool)showAddContactButton;
- (id)allContacts;
- (void)searchWithKeyword:(id)arg1;
- (_Bool)hasMoreData;
- (id)accessibilityLabelText;
- (id)titleTips;
- (id)emptyTips;
- (id)guideTips;
- (void)finderBatchModContactTypeTask:(id)arg1 finishWithSuccessNames:(id)arg2 failedNames:(id)arg3 allSuccess:(_Bool)arg4;
- (void)batchConfigAddItems:(id)arg1 delItems:(id)arg2;
- (void)requestLoadFirstPageData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

