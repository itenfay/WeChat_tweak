//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSMutableArray, NSString, WCDataItem, WCFinderSnsPostProcessMgr;

@interface WCAlbumForwardFinderUtil : NSObject
{
    CDUnknownBlockType _onAllMediaDownloadFinish;
    CDUnknownBlockType _onConfirmSend;
    WCDataItem *_feed;
    NSMutableArray *_mediaList;
    NSMutableArray *_prepardDownloadMediaInfos;
    MMUIViewController *_currentVc;
    WCFinderSnsPostProcessMgr *_finderPostMgr;
}

+ (id)getSelectedMediaContent:(id)arg1 mediaList:(id)arg2;
+ (id)getPostTimeStampWith:(unsigned int)arg1;
+ (long long)mediaListType:(id)arg1;
+ (id)selectMediaListFilePaths:(id)arg1;
+ (id)selectMediaListNotDownloadFinish:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderSnsPostProcessMgr *finderPostMgr; // @synthesize finderPostMgr=_finderPostMgr;
@property(nonatomic) __weak MMUIViewController *currentVc; // @synthesize currentVc=_currentVc;
@property(retain, nonatomic) NSMutableArray *prepardDownloadMediaInfos; // @synthesize prepardDownloadMediaInfos=_prepardDownloadMediaInfos;
@property(retain, nonatomic) NSMutableArray *mediaList; // @synthesize mediaList=_mediaList;
@property(retain, nonatomic) WCDataItem *feed; // @synthesize feed=_feed;
@property(copy, nonatomic) CDUnknownBlockType onConfirmSend; // @synthesize onConfirmSend=_onConfirmSend;
@property(copy, nonatomic) CDUnknownBlockType onAllMediaDownloadFinish; // @synthesize onAllMediaDownloadFinish=_onAllMediaDownloadFinish;
- (void)postViewControllerDidSaveDraft;
- (void)postViewControllerCancelPostWithModel:(id)arg1;
- (void)postViewControllerStartUpload;
- (void)finderPostMgrCancelPostProcess;
- (id)finderPostMgrGetSelectedMediaContent;
- (void)finderPostMgrOnSendMediaWith:(id)arg1;
- (void)pushToEditViewController;
- (void)callSomeDownloadFailed;
- (void)callAllDownloadSuccess;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)downloadMediaList:(id)arg1;
- (void)forwardFeed:(id)arg1 currentVc:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

