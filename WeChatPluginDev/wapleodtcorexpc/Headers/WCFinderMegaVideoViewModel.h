//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ForwardMessageLogicController, NSMutableDictionary, NSString, UIViewController;
@protocol WCFinderMegaVideoViewModelDelegate;

@interface WCFinderMegaVideoViewModel : NSObject
{
    UIViewController<WCFinderMegaVideoViewModelDelegate> *_context;
    ForwardMessageLogicController *_shareLogic;
    NSMutableDictionary *_bulletCache;
    NSMutableDictionary *_playerCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *playerCache; // @synthesize playerCache=_playerCache;
@property(retain, nonatomic) NSMutableDictionary *bulletCache; // @synthesize bulletCache=_bulletCache;
@property(retain, nonatomic) ForwardMessageLogicController *shareLogic; // @synthesize shareLogic=_shareLogic;
@property(nonatomic) __weak UIViewController<WCFinderMegaVideoViewModelDelegate> *context; // @synthesize context=_context;
- (void)removeAllStashedPlayer;
- (id)stashedPlayerForUrl:(id)arg1;
- (id)unstashPlayerForUrl:(id)arg1;
- (void)stashPlayer:(id)arg1 forUrl:(id)arg2;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)shareToMoment:(id)arg1 type:(unsigned long long)arg2;
- (void)shareToFriend:(id)arg1 type:(unsigned long long)arg2;
- (void)shareVideo:(id)arg1;
- (void)showShareFailForPrivate:(id)arg1;
- (id)actionSheetItemFor:(id)arg1;
- (void)onMore:(id)arg1;
- (void)reportVideo:(id)arg1;
- (void)reportBullet:(id)arg1 inVideo:(id)arg2;
- (void)routeToAuthorByVideo:(id)arg1;
- (id)interactCountString:(unsigned long long)arg1;
- (int)commentScene;
- (void)showToast:(id)arg1;
- (_Bool)isAuthorView;
- (void)changePlayRate;
- (id)deleteComment:(id)arg1 forVideo:(id)arg2;
- (id)deleteVideoById:(id)arg1 nonceId:(id)arg2 videoId:(id)arg3;
- (id)megaVideoForId:(unsigned long long)arg1;
- (id)postBullet:(id)arg1 forVideo:(id)arg2 contentVM:(id)arg3;
- (void)clearCachedBullets:(id)arg1;
- (id)getCachedBullets:(id)arg1;
- (id)getNextPageBullets:(id)arg1 position:(double)arg2;
- (id)bulletOpenToggle:(id)arg1;
- (id)favToggle:(id)arg1 sourceType:(int)arg2;
- (id)likeToggle:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

