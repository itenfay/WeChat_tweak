//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveBoxId, MMFinderGroupLiveChatBoxId, MMFinderGroupLiveChatManager, MMFinderLiveTaskId, NSDictionary, NSMutableArray, NSString;

@protocol MMFinderGroupLiveChatManagerExt <NSObject>

@optional
- (void)onMMFinderGroupLiveChatMessageSuccessLoaded:(MMFinderGroupLiveChatBoxId *)arg1;
- (void)onMMFinderGroupLiveChatMessageLoaded:(MMFinderGroupLiveChatBoxId *)arg1;
- (void)onMMFinderGroupLiveChatLocalMessageLoaded:(MMFinderGroupLiveChatBoxId *)arg1;
- (void)onMMFinderGroupLiveChatBackFillsMessage:(MMFinderLiveTaskId *)arg1 clientMsgId:(NSString *)arg2 backFillSeq:(unsigned long long)arg3 boxId:(FinderLiveBoxId *)arg4;
- (void)onMMFinderGroupLiveChatUpdateMessageAction:(unsigned long long)arg1 userInfo:(NSDictionary *)arg2;
- (void)onMMFinderGroupLiveChatRedPoint:(MMFinderGroupLiveChatManager *)arg1 reddotList:(NSMutableArray *)arg2 boxId:(MMFinderGroupLiveChatBoxId *)arg3;
- (void)onMMFinderGroupLiveChatMessage:(MMFinderGroupLiveChatManager *)arg1 commentDataItems:(NSMutableArray *)arg2 boxId:(MMFinderGroupLiveChatBoxId *)arg3;
@end

