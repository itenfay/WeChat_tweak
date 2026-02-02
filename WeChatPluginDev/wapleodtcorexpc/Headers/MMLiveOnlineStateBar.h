//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView;

@interface MMLiveOnlineStateBar
{
    UIImageView *_avatarIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *avatarIcon; // @synthesize avatarIcon=_avatarIcon;
- (void)onOnlineStateButtonClicked;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)refreshWidgetsForFontSizeChange;
- (void)sizeToFits;
- (void)updateOnlineCountTitle:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3;

@end

