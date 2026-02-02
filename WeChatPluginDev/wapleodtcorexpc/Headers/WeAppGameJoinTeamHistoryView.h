//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView, MMUILabel;

@interface WeAppGameJoinTeamHistoryView
{
    MMUIImageView *_leftIconView;
    MMUILabel *_wordingLable;
    MMUIImageView *_rightIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIImageView *rightIconView; // @synthesize rightIconView=_rightIconView;
@property(retain, nonatomic) MMUILabel *wordingLable; // @synthesize wordingLable=_wordingLable;
@property(retain, nonatomic) MMUIImageView *leftIconView; // @synthesize leftIconView=_leftIconView;
- (void)layoutUI;
- (void)initUI;
- (void)layoutSubviews;
- (id)init;

@end

