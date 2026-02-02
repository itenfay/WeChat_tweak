//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJTimecodeView, MMUIButton, NSArray, UIStackView;

@interface MJComposingToolbar
{
    MJTimecodeView *_timecodeLabel;
    MMUIButton *_playButton;
    MMUIButton *_undoButton;
    MMUIButton *_redoButton;
    UIStackView *_undoRedoContainer;
    NSArray *_contentSubviews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *contentSubviews; // @synthesize contentSubviews=_contentSubviews;
@property(retain, nonatomic) UIStackView *undoRedoContainer; // @synthesize undoRedoContainer=_undoRedoContainer;
@property(readonly, nonatomic) MMUIButton *redoButton; // @synthesize redoButton=_redoButton;
@property(readonly, nonatomic) MMUIButton *undoButton; // @synthesize undoButton=_undoButton;
@property(readonly, nonatomic) MMUIButton *playButton; // @synthesize playButton=_playButton;
@property(readonly, nonatomic) MJTimecodeView *timecodeLabel; // @synthesize timecodeLabel=_timecodeLabel;
- (void)hideAll:(_Bool)arg1;
- (void)showAll:(_Bool)arg1;
- (void)showSubviews:(id)arg1 animated:(_Bool)arg2;
- (void)hideSubviews:(id)arg1 animated:(_Bool)arg2;
- (void)setIsPlaying:(_Bool)arg1;
- (void)setIsEnabled:(_Bool)arg1;
- (void)layoutViews;
- (void)setupViews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

