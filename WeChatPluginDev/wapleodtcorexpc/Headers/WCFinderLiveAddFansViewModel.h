//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol WCFinderLiveAddFansViewModelDelegate;

@interface WCFinderLiveAddFansViewModel : NSObject
{
    _Bool _hasMoreFans;
    id <WCFinderLiveAddFansViewModelDelegate> _delegate;
    long long _fansCount;
    NSMutableArray *_contactArray;
    unsigned long long _lastMaxFansId;
    unsigned long long _liveID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long liveID; // @synthesize liveID=_liveID;
@property(nonatomic) unsigned long long lastMaxFansId; // @synthesize lastMaxFansId=_lastMaxFansId;
@property(nonatomic) _Bool hasMoreFans; // @synthesize hasMoreFans=_hasMoreFans;
@property(retain, nonatomic) NSMutableArray *contactArray; // @synthesize contactArray=_contactArray;
@property(nonatomic) long long fansCount; // @synthesize fansCount=_fansCount;
@property(nonatomic) __weak id <WCFinderLiveAddFansViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeFans:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)addToBlackList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)fetchMoreData;
- (id)initWithLiveID:(unsigned long long)arg1 addFansCount:(long long)arg2;

@end

