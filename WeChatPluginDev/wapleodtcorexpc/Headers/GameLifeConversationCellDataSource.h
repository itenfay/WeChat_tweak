//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMBaseSessionStorage, NSMutableDictionary;
@protocol GameLifeConversationCellDataSourceDelegate;

@interface GameLifeConversationCellDataSource : NSObject
{
    id <GameLifeConversationCellDataSourceDelegate> _delegate;
    unsigned long long _currentCount;
    MMBaseSessionStorage *_conversationStorage;
    NSMutableDictionary *_sessionId2ViewModelDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *sessionId2ViewModelDic; // @synthesize sessionId2ViewModelDic=_sessionId2ViewModelDic;
@property(retain, nonatomic) MMBaseSessionStorage *conversationStorage; // @synthesize conversationStorage=_conversationStorage;
@property(nonatomic) unsigned long long currentCount; // @synthesize currentCount=_currentCount;
@property(nonatomic) __weak id <GameLifeConversationCellDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)openChatAtIndex:(long long)arg1 fromNav:(id)arg2;
- (id)conversationCellViewModelAtIndex:(long long)arg1;
- (id)conversationWithSessionId:(id)arg1;
- (id)conversationAtIndex:(long long)arg1;
- (id)conversationAtOffset:(long long)arg1 limit:(long long)arg2;
- (long long)conversationCount;
- (void)loadInitialAllUnreadAndMinCnt:(long long)arg1;
- (void)loadNextPage;
- (void)checkConversationContactInitial:(long long)arg1;
- (void)reload;
- (void)loadInitial;
- (id)initWithConversationStorage:(id)arg1;

@end

