//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol TingDiscoverTapesService;

@interface TingDiscoverTapeMgr : NSObject
{
    unsigned int _taskId;
    id <TingDiscoverTapesService> _discoverService;
    NSMutableDictionary *_dictTaskContainer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dictTaskContainer; // @synthesize dictTaskContainer=_dictTaskContainer;
@property(retain, nonatomic) id <TingDiscoverTapesService> discoverService; // @synthesize discoverService=_discoverService;
@property(nonatomic) unsigned int taskId; // @synthesize taskId=_taskId;
- (id)audioRecommendTapeItem;
- (id)listenLaterTapeItem;
- (void)onListenItemCommentInfoUpdate:(id)arg1 commentInfo:(id)arg2 errMsg:(id)arg3 taskId:(unsigned int)arg4;
- (void)onMusicTapesUpdate:(id)arg1 errMsg:(id)arg2 taskId:(unsigned int)arg3;
- (void)likeCurOpLikeStatus:(_Bool)arg1 scene:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)likeOpWithListenId:(id)arg1 isCancel:(_Bool)arg2 scene:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getCommentInfoForListenIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)discoverMusicTapesWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

