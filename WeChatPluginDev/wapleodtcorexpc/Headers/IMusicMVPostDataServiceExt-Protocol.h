//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicMVModel, NSString, WCFinderDataItem;

@protocol IMusicMVPostDataServiceExt <NSObject>

@optional
- (void)onPostPublishLogicFinishedCancelPublishing;
- (void)onPostPublishLogicFinishedPosting:(MMMusicMVModel *)arg1 createdFinder:(_Bool)arg2;
- (void)onPostPublishLogicFinishedSavingAsDraft:(MMMusicMVModel *)arg1 createdFinder:(_Bool)arg2;
- (void)onPostPublishLogicClickPost;
- (void)onMVPostDataServiceUpdatedLocalMVItemWithLocalId:(NSString *)arg1;
- (void)onMVPostDataServiceAddedNewLocalMVDraft;
- (void)onMVPostDataServiceAddedNewLocalMVItem;
- (void)onMVPostDataServiceLocalMVDraftDeletedWithLocalId:(NSString *)arg1;
- (void)onMVPostDataServiceLocalMVItemDeletedWithLocalId:(NSString *)arg1;
- (void)onMVPostDataServicePostMVFailedWithLocalId:(NSString *)arg1;
- (void)onMVPostDataServicePostMVSuccess:(MMMusicMVModel *)arg1 svrDataItem:(WCFinderDataItem *)arg2 localId:(NSString *)arg3 relatedDraftId:(NSString *)arg4;
@end

