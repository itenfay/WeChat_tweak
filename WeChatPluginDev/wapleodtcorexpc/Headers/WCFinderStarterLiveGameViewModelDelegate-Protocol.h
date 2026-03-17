//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveGameUserInfo, NSMutableArray, NSString;

@protocol WCFinderStarterLiveGameViewModelDelegate <NSObject>
- (void)onUpdateShowSearch:(_Bool)arg1;
- (void)onGetGameUserInfoErr:(int)arg1 errMsg:(NSString *)arg2;
- (void)onUpdateGameUserStickerInfo:(MMFinderLiveGameUserInfo *)arg1 needClearClientLocalCache:(_Bool)arg2;
- (void)onUpdateGameUserInfo:(MMFinderLiveGameUserInfo *)arg1 needClearClientLocalCache:(_Bool)arg2;
- (void)onUpdateGameUserInfoList:(NSMutableArray *)arg1;
@end

