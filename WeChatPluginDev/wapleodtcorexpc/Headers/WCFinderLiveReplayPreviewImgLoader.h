//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, WCFinderLiveReplayPreviewImgInfo;

@interface WCFinderLiveReplayPreviewImgLoader : NSObject
{
    _Bool _hasCompletePreRequest;
    _Bool _isStartLoad;
    CDUnknownBlockType _preLoadCompletion;
    double _currPreviewTime;
    long long _currPreviewImgInfoIndex;
    WCFinderLiveReplayPreviewImgInfo *_currPreviewImgInfo;
    NSMutableArray *_previewImgList;
    unsigned long long _currPreRequestCnt;
    unsigned long long _lastPreRequestBySide;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastPreRequestBySide; // @synthesize lastPreRequestBySide=_lastPreRequestBySide;
@property(nonatomic) unsigned long long currPreRequestCnt; // @synthesize currPreRequestCnt=_currPreRequestCnt;
@property(retain, nonatomic) NSMutableArray *previewImgList; // @synthesize previewImgList=_previewImgList;
@property(retain, nonatomic) WCFinderLiveReplayPreviewImgInfo *currPreviewImgInfo; // @synthesize currPreviewImgInfo=_currPreviewImgInfo;
@property(nonatomic) long long currPreviewImgInfoIndex; // @synthesize currPreviewImgInfoIndex=_currPreviewImgInfoIndex;
@property(nonatomic) double currPreviewTime; // @synthesize currPreviewTime=_currPreviewTime;
@property(nonatomic) _Bool isStartLoad; // @synthesize isStartLoad=_isStartLoad;
@property(nonatomic) _Bool hasCompletePreRequest; // @synthesize hasCompletePreRequest=_hasCompletePreRequest;
@property(copy, nonatomic) CDUnknownBlockType preLoadCompletion; // @synthesize preLoadCompletion=_preLoadCompletion;
@property(readonly, nonatomic) unsigned long long previewImgCount;
- (id)getRightSideNearestUnLoadedImgInfo:(unsigned long long)arg1;
- (id)getLeftSideNearestUnLoadedImgInfo:(unsigned long long)arg1;
- (id)getNextPreRequestPreviewImgInfo:(unsigned long long *)arg1;
- (void)updateHasCompletePreRequest:(_Bool)arg1;
- (void)checkHasCompletePreRequest;
- (void)tryToPreLoadPreviewImgs;
- (long long)getNearestPreviewImgInfoIndexWithTime:(double)arg1;
- (void)sortPreviewImgList;
- (void)reUpdateCurrPreviewImgInfoIndex;
- (void)updateCurrPreviewImgInfo;
- (void)updateCurrentPreviewTime:(double)arg1;
- (id)getNearestPreviewImgInfoWithTime:(double)arg1;
- (void)appendPreviewThumbList:(id)arg1;
- (void)startLoad;

@end

