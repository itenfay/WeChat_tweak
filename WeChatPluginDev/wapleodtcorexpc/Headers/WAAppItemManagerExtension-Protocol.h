//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CommUseAppInfo_CommUseConfig, NSArray, WAAppItemData, WAStarMoveContext;

@protocol WAAppItemManagerExtension <NSObject>

@optional
- (void)onWeAppCommonUseItemsInfoUpdated:(NSArray *)arg1 commuseConfig:(CommUseAppInfo_CommUseConfig *)arg2 scene:(unsigned int)arg3;
- (void)onWeAppStaredItemsInfoUpdated:(NSArray *)arg1 scene:(unsigned int)arg2;
- (void)onWeAppItemsInfoUpdatedErrorWithErrorCode:(int)arg1 scene:(unsigned int)arg2;
- (void)onWeAppItemsInfoUpdatedWithAPageItem:(NSArray *)arg1 localLastUpdateTime:(unsigned int)arg2 remoteLastUpdateTime:(unsigned int)arg3 hasMore:(_Bool)arg4 scene:(unsigned int)arg5;
- (void)onWeAppItemUnStared:(WAAppItemData *)arg1 errCode:(int)arg2;
- (void)onWeAppItemStared:(WAAppItemData *)arg1 errCode:(int)arg2;
- (void)onWeAppItemBatchMoved:(WAStarMoveContext *)arg1;
- (void)onWeAppItemMoved:(WAAppItemData *)arg1 toPreItem:(WAAppItemData *)arg2 nextItem:(WAAppItemData *)arg3;
- (void)onWeAppCommonUseItemDeleted:(WAAppItemData *)arg1;
- (void)onWeAppItemUnStared:(WAAppItemData *)arg1;
- (void)onWeAppItemStared:(WAAppItemData *)arg1;
- (void)onWeAppItemDeleted:(WAAppItemData *)arg1;
- (void)onWeAppItemOpened:(WAAppItemData *)arg1;
@end

