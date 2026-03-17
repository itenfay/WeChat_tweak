//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, WCStoryComment, WCStoryDataItem, WCStoryZonePageIndexObj;

@protocol WCStoryFacadeExt <NSObject>

@optional
- (void)onPermissionsHasChanged;
- (void)onUserRelatedCommentReadWithTid:(NSString *)arg1;
- (void)onMakeAllUserRelatedCommentRead;
- (void)onMakeAllUserRelatedCommentWithUsername:(NSString *)arg1;
- (void)onRelatedCommentDel:(WCStoryComment *)arg1;
- (void)onRelatedCommentAdd:(WCStoryComment *)arg1;
- (void)onReverseDataItemPrivateWithTid:(NSString *)arg1 isInvisible:(_Bool)arg2;
- (void)onDataItemHasUpdate:(WCStoryDataItem *)arg1;
- (void)onContactHasChange;
- (void)onSetNewLastReadMaxTid;
- (void)onAlbumRedDotStatusChanged;
- (void)onCameraRedDotCleaned;
- (void)onDeleteStoryWithStory:(WCStoryDataItem *)arg1 PageIndexObj:(WCStoryZonePageIndexObj *)arg2;
- (void)onMarkStoryReadWithUserName:(NSString *)arg1 Tid:(NSString *)arg2;
- (void)onCleanUnReadStorys:(NSArray *)arg1;
- (void)onUserStoryPageFromZerotoOne:(NSString *)arg1;
- (void)onStoryUnreadCommentCountUpdate;
- (void)onStoryUploadSuccessWithDataItem:(WCStoryDataItem *)arg1;
- (void)onStoryUploadFailWithDataItem:(WCStoryDataItem *)arg1;
- (void)onStoryUploadRetry:(WCStoryDataItem *)arg1;
- (void)onStoryCommentDeleteSuccessWithStoryId:(NSString *)arg1 CommentId:(NSString *)arg2;
- (void)onStoryDeleteSuccessWithDataTid:(NSString *)arg1;
- (void)onDeleteCommentFail:(WCStoryComment *)arg1;
- (void)onDeleteCommentSuccess:(WCStoryComment *)arg1;
- (void)onCommentSuccess:(WCStoryComment *)arg1;
- (void)onCommentFail:(WCStoryComment *)arg1;
- (void)onDataItemAllCommentMakeRead:(WCStoryDataItem *)arg1;
- (void)onGetStoryUnReadComment:(WCStoryDataItem *)arg1;
- (void)onGetStoryComentDelete:(WCStoryDataItem *)arg1;
@end

