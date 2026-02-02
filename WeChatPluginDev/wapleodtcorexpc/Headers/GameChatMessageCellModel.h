//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameLifeConversation, GameLifeConversationCellDataSource, NSString, UIImage;

@interface GameChatMessageCellModel
{
    _Bool _showAsRedDot;
    int _msgShowType;
    NSString *_bottomText;
    NSString *_iconUrl;
    UIImage *_iconImage;
    unsigned long long _redPointCnt;
    GameLifeConversationCellDataSource *_conversationCellDataSource;
    GameLifeConversation *_gameLifeConversation;
    long long _conversationIndex;
    double _lastMessageUpdateTime;
    double _itemSpace;
}

- (void).cxx_destruct;
@property(nonatomic) double itemSpace; // @synthesize itemSpace=_itemSpace;
@property(nonatomic) double lastMessageUpdateTime; // @synthesize lastMessageUpdateTime=_lastMessageUpdateTime;
@property(nonatomic) long long conversationIndex; // @synthesize conversationIndex=_conversationIndex;
@property(retain, nonatomic) GameLifeConversation *gameLifeConversation; // @synthesize gameLifeConversation=_gameLifeConversation;
@property(retain, nonatomic) GameLifeConversationCellDataSource *conversationCellDataSource; // @synthesize conversationCellDataSource=_conversationCellDataSource;
@property(nonatomic) int msgShowType; // @synthesize msgShowType=_msgShowType;
@property(nonatomic) _Bool showAsRedDot; // @synthesize showAsRedDot=_showAsRedDot;
@property(nonatomic) unsigned long long redPointCnt; // @synthesize redPointCnt=_redPointCnt;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *bottomText; // @synthesize bottomText=_bottomText;
- (void)updateCellAlpha:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)openGameCenterMsgController:(int)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (Class)bindCellClass;
- (id)cellReuseIdentifier;

@end

