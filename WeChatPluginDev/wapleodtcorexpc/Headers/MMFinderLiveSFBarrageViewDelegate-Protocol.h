//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveBoxId, MMLiveCommentDataItem, NSArray;

@protocol MMFinderLiveSFBarrageViewDelegate <NSObject>
- (void)onFinderLiveSFBarrageEnableFaceDetectChanged:(_Bool)arg1;
- (void)onFinderLiveSFBarrageHasBarrageMovingAtTrackIndex:(unsigned long long)arg1;
- (void)onFinderLiveSFBarrageHasBarrageDataChanged:(_Bool)arg1;
- (void)onFinderLiveSFBarrageInvokeCopy:(MMLiveCommentDataItem *)arg1;
- (unsigned int)getSingleEnableCommentForDataItem:(MMLiveCommentDataItem *)arg1;
- (void)onFinderLiveSFBarrageInvokeJumpPOI:(MMLiveCommentDataItem *)arg1;
- (void)onFinderLiveSFBarrageInvokeKickOut:(MMLiveCommentDataItem *)arg1;
- (void)onFinderLiveSFBarrageInvokeAllow:(MMLiveCommentDataItem *)arg1;
- (void)onFinderLiveSFBarrageInvokeNoSenseAllow:(MMLiveCommentDataItem *)arg1;
- (void)onFinderLiveSFBarrageInvokeNoSenseBan:(MMLiveCommentDataItem *)arg1;
- (void)onFinderLiveSFBarrageInvokeBan:(MMLiveCommentDataItem *)arg1;
- (void)onFinderLiveSFBarrageInvokeTop:(MMLiveCommentDataItem *)arg1;
- (void)onFinderLiveSFBarrageInvokeRoleProfile:(MMLiveCommentDataItem *)arg1;
- (void)onFinderLiveSFBarrageFinderRoleExpose:(MMLiveCommentDataItem *)arg1;
- (void)onFinderLiveSFBarrageInvokeUnLike:(MMLiveCommentDataItem *)arg1;
- (void)onFinderLiveSFBarrageInvokeLike:(MMLiveCommentDataItem *)arg1;
- (void)onFinderLiveSFBarrageInvokeExpose:(MMLiveCommentDataItem *)arg1;
- (void)onFinderLiveSFBarrageInvokeReply:(MMLiveCommentDataItem *)arg1;
- (void)onFinderLiveSFBarrageEnableDisplayChanged:(_Bool)arg1;
- (void)onFinderLiveSFBarrageLandscapeStyleDisplayChanged:(_Bool)arg1;
- (NSArray *)requestRecentLoadedCommentItemList:(unsigned long long)arg1 boxId:(FinderLiveBoxId *)arg2 requiredMsgTypeList:(NSArray *)arg3 requiredMsgSubTypeList:(NSArray *)arg4;
- (MMLiveCommentDataItem *)getLastValidCommentItem:(FinderLiveBoxId *)arg1;
- (NSArray *)getFinderLiveBoxIdList;
- (double)finderLiveSFBarrageGetTopWidgetBottom;
@end

