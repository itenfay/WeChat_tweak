//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol GameLifeConversationCellDataSourceDelegate <NSObject>

@optional
- (void)onGameLifeConversationLoadMoreResultError;
- (void)onGameLifeConversationLoadMoreResultChanged:(_Bool)arg1;
- (void)onGameLifeConversationLoadResultError;
- (void)onGameLifeConversationLoadResultChanged:(unsigned long long)arg1 hasMore:(_Bool)arg2;
@end

