//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIImageView;

@interface MMMusicLiveVCTopBarMusicSourceButton
{
    UIImageView *_musicSourceIconView;
    MMUILabel *_musicSourceLabel;
    UIImageView *_musicSourceArrow;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *musicSourceArrow; // @synthesize musicSourceArrow=_musicSourceArrow;
@property(retain, nonatomic) MMUILabel *musicSourceLabel; // @synthesize musicSourceLabel=_musicSourceLabel;
@property(retain, nonatomic) UIImageView *musicSourceIconView; // @synthesize musicSourceIconView=_musicSourceIconView;
- (void)reloadWithIconImage:(id)arg1 appName:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 iconImage:(id)arg2 appName:(id)arg3;

@end

