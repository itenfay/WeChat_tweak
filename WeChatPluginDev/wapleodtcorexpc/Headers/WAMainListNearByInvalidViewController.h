//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel, UIView;

@interface WAMainListNearByInvalidViewController
{
    unsigned long long _invalidType;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) unsigned long long invalidType; // @synthesize invalidType=_invalidType;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)onReturn;
- (void)initContentView;
- (void)updateNavigationItems;
- (void)initCustomNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithInvalidType:(unsigned long long)arg1;

@end

