//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLocation, MMUIViewController, NSMutableDictionary, NSString;
@protocol WCFinderPostEditEntrySnsProtocol;

@interface WCFinderPostEditEntryMgr : NSObject
{
    id <WCFinderPostEditEntrySnsProtocol> _snsEditDelegate;
    NSMutableDictionary *_feedIdTaskIdDic;
    NSMutableDictionary *_compressTaskIdDic;
    NSMutableDictionary *_encodeTaskDic;
    NSString *_content;
    FinderLocation *_location;
    MMUIViewController *_fromVC;
    unsigned long long _postFromScene;
    CDUnknownBlockType _completionHandler;
    NSString *_sessionId;
}

+ (unsigned long long)getPostSceneByFromScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) unsigned long long postFromScene; // @synthesize postFromScene=_postFromScene;
@property(nonatomic) __weak MMUIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(retain, nonatomic) FinderLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSMutableDictionary *encodeTaskDic; // @synthesize encodeTaskDic=_encodeTaskDic;
@property(retain, nonatomic) NSMutableDictionary *compressTaskIdDic; // @synthesize compressTaskIdDic=_compressTaskIdDic;
@property(retain, nonatomic) NSMutableDictionary *feedIdTaskIdDic; // @synthesize feedIdTaskIdDic=_feedIdTaskIdDic;
@property(nonatomic) __weak id <WCFinderPostEditEntrySnsProtocol> snsEditDelegate; // @synthesize snsEditDelegate=_snsEditDelegate;
- (void)addCompositionTask:(id)arg1 fromPostSession:(id)arg2;
- (void)sendVideoWithDraft:(id)arg1;
- (void)finderTemplateProcessVC:(id)arg1 didExportFinishWithPath:(id)arg2 outputParams:(id)arg3;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (void)enterPostPageByImageModels:(id)arg1 content:(id)arg2 location:(id)arg3 fromVC:(id)arg4 postFromScene:(unsigned long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)convertImageModelsToImageArrayPromise:(id)arg1;
- (id)getMaterialArrayFromImageModels:(id)arg1;
- (void)sightVideoCompositeTask:(id)arg1 didFinish:(_Bool)arg2 withSightDraft:(id)arg3;
- (void)registerCompressCallback:(CDUnknownBlockType)arg1 fromPostSession:(id)arg2;
- (void)registerCompressCallbackFromDraftScene:(CDUnknownBlockType)arg1 withPostSession:(id)arg2;
- (void)recoverLocalUploadDataItem;
- (_Bool)checkHadEncodingForDataItem:(id)arg1;
- (void)removeCompressProgressFromDataItem:(id)arg1;
- (void)postViewControllerCancelPostWithModel:(id)arg1;
- (void)postViewControllerSaveDraftAndOpenProfile:(id)arg1;
- (void)postViewControllerFromVC:(id)arg1 postSession:(id)arg2;
- (void)presentFinderPostViewControllerWithPostSession:(id)arg1 presentAnimated:(_Bool)arg2 fromVC:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)enterPostPageByVideoPath:(id)arg1 content:(id)arg2 location:(id)arg3 postFromScene:(unsigned long long)arg4 fromVC:(id)arg5 templateInfo:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_encodeOriginalVideoByUrl:(id)arg1 forDataItem:(id)arg2 doneBlock:(CDUnknownBlockType)arg3;
- (void)enterPostPageOriginalVideoBySrcPHAsset:(id)arg1 content:(id)arg2 location:(id)arg3 postFromScene:(unsigned long long)arg4 fromVC:(id)arg5 outputVideoPath:(id)arg6 templateInfo:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)enterPostPageEditVideoBySrcPHAsset:(id)arg1 editVideoAttr:(id)arg2 compositionAttr:(id)arg3 sightDraft:(id)arg4 content:(id)arg5 location:(id)arg6 fromVC:(id)arg7 outputVideoPath:(id)arg8 postFromScene:(unsigned long long)arg9 templateInfo:(id)arg10 completionHandler:(CDUnknownBlockType)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

