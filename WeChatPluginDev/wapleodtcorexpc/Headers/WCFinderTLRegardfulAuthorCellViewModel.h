//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveContentVM, NSString, WCFinderContact;

@interface WCFinderTLRegardfulAuthorCellViewModel : NSObject
{
    _Bool _hadRead;
    _Bool _hadShowLive;
    _Bool _needDelete;
    WCFinderContact *_contact;
    MMFinderLiveContentVM *_liveContentVM;
    NSString *_lastFeedID;
    NSString *_lastNonceID;
    unsigned long long _lastestUnreadTime;
    unsigned long long _localLastestUpdateTime;
    NSString *_lastReadLiveFeedID;
}

+ (id)regardfulAuthorCellViewModelWithOfterReadItem:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *lastReadLiveFeedID; // @synthesize lastReadLiveFeedID=_lastReadLiveFeedID;
@property(nonatomic) unsigned long long localLastestUpdateTime; // @synthesize localLastestUpdateTime=_localLastestUpdateTime;
@property(nonatomic) unsigned long long lastestUnreadTime; // @synthesize lastestUnreadTime=_lastestUnreadTime;
@property(copy, nonatomic) NSString *lastNonceID; // @synthesize lastNonceID=_lastNonceID;
@property(copy, nonatomic) NSString *lastFeedID; // @synthesize lastFeedID=_lastFeedID;
@property(nonatomic) _Bool needDelete; // @synthesize needDelete=_needDelete;
@property(nonatomic) _Bool hadShowLive; // @synthesize hadShowLive=_hadShowLive;
@property(nonatomic) _Bool hadRead; // @synthesize hadRead=_hadRead;
@property(retain, nonatomic) MMFinderLiveContentVM *liveContentVM; // @synthesize liveContentVM=_liveContentVM;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (void)onJoinFinderLiveError:(id)arg1 finderDataItem:(id)arg2 joinLiveContext:(id)arg3 errorPage:(id)arg4;
- (void)updateDeleteStatus;
- (void)onFinderContactLivingStatusHasChange:(id)arg1;
- (void)updateContactLastestLiveID;
- (void)updateContactUnreadTime;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) _Bool showShowLiveRedDotView;
@property(readonly, nonatomic) _Bool showRedDotView;
@property(readonly, nonatomic) _Bool unreadNewFeed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

