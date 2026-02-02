//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameCenterBaseMsg, MMBadgeView, UIImageView, UILabel, UIView;

@interface GameLifeNotifyInteractiveMsgCell
{
    _Bool _addSeperator;
    int _showType;
    UIView *_separator;
    MMBadgeView *_badgeView;
    UILabel *_desc;
    unsigned int _unReadCount;
    GameCenterBaseMsg *_msg;
    UIImageView *_avatarView;
    UIView *_titleView;
    UIImageView *_arrowView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void)updateDescText;
- (void)updateBadgeView;
- (void)layoutBadgeView;
- (_Bool)isInteractCell;
- (void)updateCellDataWithBaseMsg:(id)arg1 unReadCount:(unsigned int)arg2;
- (void)layoutSubviews;
- (void)setupView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 addSeperator:(_Bool)arg3 msgShowType:(int)arg4;

@end

