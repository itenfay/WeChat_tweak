//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUIImageView, MMUILabel, WCFinderHeadImageView;

@interface MMFinderLiveKTVSongRequestedCell
{
    unsigned long long _state;
    long long _position;
    WCFinderHeadImageView *_avatorImageView;
    MMUILabel *_musicSingerLabel;
    MMUILabel *_scoreLabel;
    MMUIImageView *_deleteLabel;
    MMUIImageView *_setTopLabel;
    MMUIButton *_myDeleteButton;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *myDeleteButton; // @synthesize myDeleteButton=_myDeleteButton;
@property(retain, nonatomic) MMUIImageView *setTopLabel; // @synthesize setTopLabel=_setTopLabel;
@property(retain, nonatomic) MMUIImageView *deleteLabel; // @synthesize deleteLabel=_deleteLabel;
@property(retain, nonatomic) MMUILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) MMUILabel *musicSingerLabel; // @synthesize musicSingerLabel=_musicSingerLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatorImageView; // @synthesize avatorImageView=_avatorImageView;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (_Bool)shouldHideDelete;
- (_Bool)shouldHideSetTop;
- (id)scoreLabelText;
- (void)onClickedSetTop;
- (void)onClickedDelete;
- (void)willAppear:(unsigned long long)arg1;
- (void)customLayoutUI;

@end

