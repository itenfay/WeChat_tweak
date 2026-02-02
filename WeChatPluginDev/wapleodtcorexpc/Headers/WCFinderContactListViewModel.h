//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;
@protocol WCFinderContactListViewModelDelegate;

@interface WCFinderContactListViewModel : NSObject
{
    _Bool _hasMoreContact;
    _Bool _isFetchingData;
    id <WCFinderContactListViewModelDelegate> _delegate;
    unsigned long long _followCount;
    NSMutableArray *_contactArray;
    NSData *_lastBuffer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool hasMoreContact; // @synthesize hasMoreContact=_hasMoreContact;
@property(retain, nonatomic) NSMutableArray *contactArray; // @synthesize contactArray=_contactArray;
@property(nonatomic) unsigned long long followCount; // @synthesize followCount=_followCount;
@property(nonatomic) __weak id <WCFinderContactListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeContact:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertContact:(id)arg1;
- (void)onFinderContactFollowListHasChange:(id)arg1;
- (void)unfollowBrandContact:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)unfollowFinderContact:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)unfollowContact:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)fetchMoreData;
- (void)fetchLocalContactList;
- (id)getContactArray;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

