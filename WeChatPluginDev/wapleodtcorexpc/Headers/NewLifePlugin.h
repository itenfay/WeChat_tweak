//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BrandDirectlyOperateContactLogic, FLTNewLifeCommonApi, FLTPreviewPictureCallbackApi, FlutterEventChannel, NSMutableSet, NSString, UIViewController, WCFinderDataItem;
@protocol FlutterTextureRegistry;

@interface NewLifePlugin : NSObject
{
    UIViewController *_associateViewController;
    FlutterEventChannel *_editPhotosEventChannel;
    CDUnknownBlockType _editPhotosEventSink;
    FLTPreviewPictureCallbackApi *_previewPictureCallbackApi;
    FLTNewLifeCommonApi *_commonApi;
    NSMutableSet *_handlerSet;
    NSObject<FlutterTextureRegistry> *_flutterTextureRegistery;
    WCFinderDataItem *_detailLiveDataItem;
    BrandDirectlyOperateContactLogic *_brandOperateContactLogic;
}

+ (id)plugin;
+ (id)requestFromData:(id)arg1 pbClass:(Class)arg2;
+ (void)handleNewLifeFinderLikeFeed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) BrandDirectlyOperateContactLogic *brandOperateContactLogic; // @synthesize brandOperateContactLogic=_brandOperateContactLogic;
@property(retain, nonatomic) WCFinderDataItem *detailLiveDataItem; // @synthesize detailLiveDataItem=_detailLiveDataItem;
@property(retain, nonatomic) NSObject<FlutterTextureRegistry> *flutterTextureRegistery; // @synthesize flutterTextureRegistery=_flutterTextureRegistery;
@property(retain, nonatomic) NSMutableSet *handlerSet; // @synthesize handlerSet=_handlerSet;
@property(retain, nonatomic) FLTNewLifeCommonApi *commonApi; // @synthesize commonApi=_commonApi;
@property(retain, nonatomic) FLTPreviewPictureCallbackApi *previewPictureCallbackApi; // @synthesize previewPictureCallbackApi=_previewPictureCallbackApi;
@property(copy, nonatomic) CDUnknownBlockType editPhotosEventSink; // @synthesize editPhotosEventSink=_editPhotosEventSink;
@property(retain, nonatomic) FlutterEventChannel *editPhotosEventChannel; // @synthesize editPhotosEventChannel=_editPhotosEventChannel;
@property(nonatomic) __weak UIViewController *associateViewController; // @synthesize associateViewController=_associateViewController;
- (id)onCancelWithArguments:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (void)onDetachedToViewController;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)sendCallback:(id)arg1 data:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fltNewLifeActionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)previewPicturesPictures:(id)arg1 index:(id)arg2 isNeedNotifyPictureSelectChanged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)availableNavigationController;
- (void)dealloc;
- (id)init;
- (void)handleActionWithCommand:(id)arg1 requestData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleCompressImgRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleStartCdnUploadSync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleStartCdnUpload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGetNativeInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGetCreatorCenterInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleStartEnvelopeActivityPage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handlePagePerformanceStart:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handlePagePerformanceAddStep:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleAddReportAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handlePrefetch:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleJumpBindPhone:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGetAuthorLiveState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleRequestPermission:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGetCurTabIndex:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleCheckUseWxam:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleBatchGetFinderContactCache:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleBatchGetChatRoomInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleSetReportSDKInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handlePreloadBizPicturePage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleJumpToBizPicturePage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleJumpToVideoPlayPage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGetNativePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGetDynamicConfig:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleOpenLikeList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleFetchAutoPlayMusic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleFetchExtraInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGetLocalJumpInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGeneralJump:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGetImageTagList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleUpdateMentionUserList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGetFunctionSpam:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleBlockOrUnblockCommentUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleComplaintComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGetLatestPostingFeed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleJumpToProfileWithNickname:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGetFeedRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleMergeOrUpdateFeedRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleHasFailedPosts:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGetUnReportFeed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGetHeartLikeList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGetLikeList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGetFavList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleFollowUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGetBizFollowStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleBatchDisposeRedDotTips:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleBatchGetRedDotTipsShowInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleUpdateFeedObjToNativeCache:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGetFeedObjFromNativeCache:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleOpenFinderFollowPage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleOpenFinderEventPage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleOpenFinderTopicPage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleNewLifeFavoriteFeed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleNewLifeFinderLikeFeed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleNewLifeLikeFeed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGetSelfFinderContactStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleNotifyHomePageSearchResultChanged:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleUpdateSearchIconVisibility:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGetSelfWxContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGetSelfFinderContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleCloseAllDetailPage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)getFirstDetailIndex;
- (void)handleGetDetailEmbeddedInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleOpenFinderProfilePage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleHomeChannelTabAreaNotify:(id)arg1;
- (void)handleListScrollEvent:(id)arg1;
- (void)handleNativeCropImageRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleKeyboardScrollState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleRepostRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleWxamToPicRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleUnregisterCallbackRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleRegisterCallbackRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleClearReddotInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleFinishCodeStartRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleCodeStartRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleDeleteFeedRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleRequestContactRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleGetLocalConfigRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

