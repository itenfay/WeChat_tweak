//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ActiveSessionContext, MMListenCategoryItem, TingItem;

@interface TingSharePlayButton
{
    _Bool _enterPlayer;
    int _scene;
    TingItem *_tingItem;
    MMListenCategoryItem *_categoryItem;
    ActiveSessionContext *_sessionContext;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enterPlayer; // @synthesize enterPlayer=_enterPlayer;
@property(retain, nonatomic) ActiveSessionContext *sessionContext; // @synthesize sessionContext=_sessionContext;
@property(retain, nonatomic) MMListenCategoryItem *categoryItem; // @synthesize categoryItem=_categoryItem;
@property(retain, nonatomic) TingItem *tingItem; // @synthesize tingItem=_tingItem;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3;
- (_Bool)isPlaying;
- (void)togglePlay;
- (void)setButtonStyle:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

