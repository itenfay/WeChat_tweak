//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMListenItem, NSString, TingItem, TingTaskPlayingInfoRecord;
@protocol TingFlowSessionProtocol;

@protocol TingAudioTabDataManagerExt <NSObject>

@optional
- (void)didDislikeListenId:(NSString *)arg1 ofCategoryId:(NSString *)arg2 succeed:(_Bool)arg3;
- (void)onTingItemPlayEnd:(TingItem *)arg1;
- (void)onTingItem:(NSString *)arg1 UpdatePlayRecord:(TingTaskPlayingInfoRecord *)arg2;
- (void)onFeedListFetchedData:(id <TingFlowSessionProtocol>)arg1;
- (void)didDeletedListenLaterWithItem:(MMListenItem *)arg1 succeed:(_Bool)arg2;
- (void)didAddedListenLaterWithItem:(MMListenItem *)arg1 succeed:(_Bool)arg2;
- (void)willDeleteListenLaterWithItem:(MMListenItem *)arg1;
- (void)willAddListenLaterWithItem:(MMListenItem *)arg1;
@end

