//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, UIImageView, UILabel;

@interface MMLiveVisibilitySelectButton
{
    _Bool _hideLogo;
    int _liveMode;
    NSArray *_preparedRedpacketRoomIds;
    NSArray *_visibleRoomIds;
    NSArray *_visibleUserNames;
    long long _lastSelectMode;
    double _maxWidth;
    UIImageView *_iconView;
    UILabel *_textLabel;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hideLogo; // @synthesize hideLogo=_hideLogo;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) int liveMode; // @synthesize liveMode=_liveMode;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) long long lastSelectMode; // @synthesize lastSelectMode=_lastSelectMode;
@property(retain, nonatomic) NSArray *visibleUserNames; // @synthesize visibleUserNames=_visibleUserNames;
@property(retain, nonatomic) NSArray *visibleRoomIds; // @synthesize visibleRoomIds=_visibleRoomIds;
@property(retain, nonatomic) NSArray *preparedRedpacketRoomIds; // @synthesize preparedRedpacketRoomIds=_preparedRedpacketRoomIds;
- (void)adjustSubViewsCenterY;
- (void)sizeToFit;
- (void)updateWithVisibleRoomIds:(id)arg1 visibleUserNames:(id)arg2 firstVisibleUserName:(id)arg3 selectMode:(long long)arg4 liveMode:(int)arg5;
- (void)updateWithPrepareChatroomIds:(id)arg1 lastSelectMode:(long long)arg2 liveMode:(int)arg3;
- (void)hideLogo:(_Bool)arg1 maxWidth:(double)arg2;
- (id)init;

@end

