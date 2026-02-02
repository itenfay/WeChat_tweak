//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AnyPromise, NSMutableArray, NSMutableSet, NSString, VideoRingNetProvider;
@protocol VideoRingExclusiveFriendsViewModelDelegate;

@interface VideoRingExclusiveFriendsViewModel : NSObject
{
    id <VideoRingExclusiveFriendsViewModelDelegate> _delegate;
    VideoRingNetProvider *_provider;
    AnyPromise *_preload_friendsRingPromise;
    NSMutableArray *_ringbacks;
    NSMutableSet *_friendUsernameSet;
    unsigned long long _climinseq;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long climinseq; // @synthesize climinseq=_climinseq;
@property(retain, nonatomic) NSMutableSet *friendUsernameSet; // @synthesize friendUsernameSet=_friendUsernameSet;
@property(retain, nonatomic) NSMutableArray *ringbacks; // @synthesize ringbacks=_ringbacks;
@property(retain, nonatomic) AnyPromise *preload_friendsRingPromise; // @synthesize preload_friendsRingPromise=_preload_friendsRingPromise;
@property(retain, nonatomic) VideoRingNetProvider *provider; // @synthesize provider=_provider;
@property(nonatomic) __weak id <VideoRingExclusiveFriendsViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)playWithID:(id)arg1;
- (void)stopAllPlay;
- (void)onExclusiveRingModified:(id)arg1 opType:(unsigned long long)arg2;
- (long long)uniqueAddObject:(id)arg1;
- (_Bool)hasLoadDataForFriend:(id)arg1;
- (id)deleteRingbackAtIndex:(unsigned long long)arg1;
- (id)ringBackAtIndex:(unsigned long long)arg1;
- (id)fetchRingBacks;
- (id)dicExistContact;
- (unsigned long long)countOfExclusiveRingbacks;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

