//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIScrollView, UITapGestureRecognizer;
@protocol MMMusicPickerScrollViewDelegate;

@interface MMMusicPickerScrollView
{
    id <MMMusicPickerScrollViewDelegate> _delegate;
    UIScrollView *_scrollView;
    NSMutableArray *_musicPickerContentViews;
    unsigned long long _selectedIndex;
    UITapGestureRecognizer *_tap;
    NSString *_musicLogoName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *musicLogoName; // @synthesize musicLogoName=_musicLogoName;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSMutableArray *musicPickerContentViews; // @synthesize musicPickerContentViews=_musicPickerContentViews;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <MMMusicPickerScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tapAction:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)changeSelectStateForToNextIndex:(long long)arg1;
- (void)onChangeToNextIndex:(long long)arg1;
- (void)prepareScrollView:(id)arg1;
- (void)initView;
- (void)initData;
- (_Bool)isAnimating;
- (void)replayFromFlowInMs:(unsigned long long)arg1;
- (void)replay;
- (void)readyToPlay;
- (void)setCurrentContentState:(_Bool)arg1;
- (void)setupMusicData:(id)arg1 withMoveTo:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 musicLogoName:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

