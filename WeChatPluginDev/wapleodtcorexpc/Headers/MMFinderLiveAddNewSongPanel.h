//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveAddNewSongTableViewModel, MMTableView, MMUIButton, NSArray, NSString, UILabel, UIView;
@protocol MMFinderLiveAddNewSongPanelDelegate;

@interface MMFinderLiveAddNewSongPanel
{
    id <MMFinderLiveAddNewSongPanelDelegate> _delegate;
    NSArray *_originalSongs;
    UIView *_topControlContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    MMUIButton *_cancelButton;
    MMUIButton *_confirmButton;
    MMTableView *_songsTableView;
    MMFinderLiveAddNewSongTableViewModel *_songsTableVM;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveAddNewSongTableViewModel *songsTableVM; // @synthesize songsTableVM=_songsTableVM;
@property(retain, nonatomic) MMTableView *songsTableView; // @synthesize songsTableView=_songsTableView;
@property(retain, nonatomic) MMUIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topControlContainerView; // @synthesize topControlContainerView=_topControlContainerView;
@property(retain, nonatomic) NSArray *originalSongs; // @synthesize originalSongs=_originalSongs;
@property(nonatomic) __weak id <MMFinderLiveAddNewSongPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getCurrentValidSongs;
- (_Bool)validateSongNames:(id)arg1 firstInvalidIndex:(unsigned long long *)arg2;
- (void)onConfirm;
- (void)onCancel;
- (double)contentHeight;
- (double)contentWidth;
- (void)buildTopControlViews;
- (void)buildSongsTableView;
- (void)layoutSubviews;
- (void)updateSongsFromServer:(id)arg1;
- (void)pageSheetWillDisappear;
- (void)pageSheetWillAppear;
- (_Bool)pageSheetGestureRecognizerShouldBegin:(id)arg1;
- (void)setupPageSheetConfig;
- (void)setup;
- (id)initWithSongs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

