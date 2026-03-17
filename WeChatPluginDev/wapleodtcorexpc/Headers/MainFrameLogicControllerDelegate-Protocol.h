//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMSessionInfo, NSArray, NSString;

@protocol MainFrameLogicControllerDelegate <NSObject>

@optional
- (void)clearSessionCache;
- (void)stopLoadingForSessionRebuild;
- (void)startLoadingForSessionRebuild;
- (void)stopIniting:(unsigned int)arg1;
- (void)percentIniting:(NSString *)arg1;
- (void)changeNetworkStatus:(unsigned int)arg1;
- (void)insertSessionCellAtIndexes:(NSArray *)arg1;
- (void)deleteSessionCellAtIndexes:(NSArray *)arg1;
- (void)updateUnReadCount;
- (void)deleteSessionCell:(unsigned int)arg1 atSection:(long long)arg2 withUser:(NSString *)arg3;
- (void)selectCellForName:(NSString *)arg1;
- (void)cancelSelectedCell;
- (void)updateAllItemTimeLabel;
- (void)updateSession:(MMSessionInfo *)arg1;
- (void)reloadSessions;
@end

