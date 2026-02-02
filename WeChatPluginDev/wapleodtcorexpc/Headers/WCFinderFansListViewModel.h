//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, WCFinderContact;
@protocol WCFinderFansListViewModelDelegate;

@interface WCFinderFansListViewModel : NSObject
{
    _Bool _hasMoreFans;
    _Bool _isFetchingData;
    WCFinderContact *_ownerContact;
    id <WCFinderFansListViewModelDelegate> _delegate;
    unsigned long long _lastMaxFansId;
    NSData *_lastBuf;
    NSMutableArray *_contactArray;
    NSMutableArray *_addContactArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *addContactArray; // @synthesize addContactArray=_addContactArray;
@property(retain, nonatomic) NSMutableArray *contactArray; // @synthesize contactArray=_contactArray;
@property(retain, nonatomic) NSData *lastBuf; // @synthesize lastBuf=_lastBuf;
@property(nonatomic) unsigned long long lastMaxFansId; // @synthesize lastMaxFansId=_lastMaxFansId;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(nonatomic) _Bool hasMoreFans; // @synthesize hasMoreFans=_hasMoreFans;
@property(nonatomic) __weak id <WCFinderFansListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderContact *ownerContact; // @synthesize ownerContact=_ownerContact;
- (void)removeFans:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)addToBlackList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) long long fansCount;
@property(readonly, nonatomic) _Bool shouldShowOldFansTips;
- (id)getContactArrayWithSection:(long long)arg1;
- (void)fetchLocalData;
- (void)fetchMoreData;
- (id)initWithContact:(id)arg1;

@end

