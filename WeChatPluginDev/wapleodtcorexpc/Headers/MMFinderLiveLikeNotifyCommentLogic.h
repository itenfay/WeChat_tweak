//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveLikeMsgInfo, MMFinderLiveTaskId;
@protocol MMFinderLiveLikeNotifyCommentDelegate;

@interface MMFinderLiveLikeNotifyCommentLogic : NSObject
{
    unsigned int _lastDisplayMsgId;
    MMFinderLiveLikeMsgInfo *_preparingDisplayLikeMsgInfo;
    id <MMFinderLiveLikeNotifyCommentDelegate> _notifyDelegate;
    MMFinderLiveTaskId *_finderTaskId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lastDisplayMsgId; // @synthesize lastDisplayMsgId=_lastDisplayMsgId;
@property(retain, nonatomic) MMFinderLiveTaskId *finderTaskId; // @synthesize finderTaskId=_finderTaskId;
@property(nonatomic) __weak id <MMFinderLiveLikeNotifyCommentDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
@property(retain, nonatomic) MMFinderLiveLikeMsgInfo *preparingDisplayLikeMsgInfo; // @synthesize preparingDisplayLikeMsgInfo=_preparingDisplayLikeMsgInfo;
- (void)onGetFinderLiveLikeAppMsgWithTaskId:(id)arg1 likeAppMsg:(id)arg2;
- (double)getClearDelayTime;
- (void)invokeClearPreparingDisplayLikeMsg;
- (void)delayClearPreparingDisplayLikeMsg;
- (_Bool)updatePreparingDisplayLikeMsgInfo:(id)arg1;
- (void)updatePreparingDisplayLikeMsgInfoFromRemote:(id)arg1;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)onLikeMsgInfoOut:(id)arg1;
- (void)onLikeMsgInfoDisplay:(id)arg1;
- (void)onExitLive;
- (void)onEnterLive;
- (id)initWithTaskId:(id)arg1;

@end

