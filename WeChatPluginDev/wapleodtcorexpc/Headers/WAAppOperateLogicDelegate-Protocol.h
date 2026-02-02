//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CommUseAppInfo_CommUseConfig, NSArray, WAAppItemOperation;

@protocol WAAppOperateLogicDelegate <NSObject>

@optional
- (void)onOprationExcuted:(WAAppItemOperation *)arg1 errCode:(int)arg2;
- (void)onGetNearByStateFromSvrWithState:(_Bool)arg1 scene:(unsigned int)arg2 errCode:(int)arg3;
- (void)onUpdateCommonUseNextReqInterval:(unsigned int)arg1;
- (void)onGetLatestAppItemsFromSvrByCommonUse:(NSArray *)arg1 commuseConfig:(CommUseAppInfo_CommUseConfig *)arg2 scene:(unsigned int)arg3 errCode:(int)arg4;
- (void)onGetLatestAppItemsFromSvrByStarList:(NSArray *)arg1 scene:(unsigned int)arg2 errCode:(int)arg3;
- (void)onGetLatestAppItemsFromSvrByRecordList:(NSArray *)arg1 scene:(unsigned int)arg2 hasMore:(_Bool)arg3 errCode:(int)arg4;
@end

