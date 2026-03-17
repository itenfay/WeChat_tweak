//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, TextStateCardListSlidingWindowRefreshTask, TextStateCommentInfo;

@protocol TextStateMgrExt <NSObject>

@optional
- (void)onReceiveCommentItem:(TextStateCommentInfo *)arg1;
- (void)onNewTextStateSquareRefreshCardListSlidingWindow:(TextStateCardListSlidingWindowRefreshTask *)arg1;
- (void)onTextStateNearbyExperimentChange;
- (void)onTextStateRedDotDisposed:(unsigned int)arg1;
- (void)onTextStateFriendTopicUpdate;
- (void)onTextStateFriendTopicConstruct;
- (void)onTextStateIconUpdate;
- (void)onTextStateDeletedWithId:(NSString *)arg1;
- (void)onTextStateUpdateForUserName:(NSString *)arg1;
- (void)onTextStateDataUpdated;
- (void)onTextStateDataLoaded;
@end

