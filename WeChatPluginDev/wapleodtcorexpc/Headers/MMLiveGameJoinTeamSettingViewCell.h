//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCPLabel, UIImageView, UILabel;

@interface MMLiveGameJoinTeamSettingViewCell
{
    unsigned int _joinTeamMode;
    UIImageView *_selectionIndicatorView;
    UIImageView *_coinView;
    UILabel *_coinValueLabel;
    MMCPLabel *_joinTeamModeNameLabel;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) unsigned int joinTeamMode; // @synthesize joinTeamMode=_joinTeamMode;
@property(retain, nonatomic) MMCPLabel *joinTeamModeNameLabel; // @synthesize joinTeamModeNameLabel=_joinTeamModeNameLabel;
@property(retain, nonatomic) UILabel *coinValueLabel; // @synthesize coinValueLabel=_coinValueLabel;
@property(retain, nonatomic) UIImageView *coinView; // @synthesize coinView=_coinView;
@property(retain, nonatomic) UIImageView *selectionIndicatorView; // @synthesize selectionIndicatorView=_selectionIndicatorView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWithJoinTeamMode:(unsigned int)arg1 joinTeamModeName:(id)arg2 isSelected:(_Bool)arg3 coinValue:(unsigned int)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

