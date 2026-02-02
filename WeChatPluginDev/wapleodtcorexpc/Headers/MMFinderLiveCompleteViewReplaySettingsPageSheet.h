//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveInfo, MMFinderLiveCompleteViewReplaySettingsCoverPickingLogic, MMFinderLiveTask, MMLiveScrollGradientMaskingView, MMWebImageView, NSString, RichTextView, UIImage, UILabel, UIScrollView, UITableView, UIView;
@protocol MMFinderLiveCompleteViewReplaySettingsStrategy;

@interface MMFinderLiveCompleteViewReplaySettingsPageSheet
{
    CDUnknownBlockType _commitBlock;
    MMLiveScrollGradientMaskingView *_scrollMaskingView;
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    RichTextView *_descriptionLabel;
    UIView *_coverImageContainerView;
    MMWebImageView *_coverImageView;
    UIView *_coverImageHintLabelShadingView;
    UILabel *_coverImageHintLabel;
    UITableView *_optionsTableView;
    MMFinderLiveTask *_liveTask;
    FinderLiveInfo *_finderLiveInfo;
    NSString *_commentVisibilityOptionWording;
    id <MMFinderLiveCompleteViewReplaySettingsStrategy> _strategy;
    MMFinderLiveCompleteViewReplaySettingsCoverPickingLogic *_coverPickingLogic;
    UIImage *_selectedCoverImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *selectedCoverImage; // @synthesize selectedCoverImage=_selectedCoverImage;
@property(retain, nonatomic) MMFinderLiveCompleteViewReplaySettingsCoverPickingLogic *coverPickingLogic; // @synthesize coverPickingLogic=_coverPickingLogic;
@property(retain, nonatomic) id <MMFinderLiveCompleteViewReplaySettingsStrategy> strategy; // @synthesize strategy=_strategy;
@property(retain, nonatomic) NSString *commentVisibilityOptionWording; // @synthesize commentVisibilityOptionWording=_commentVisibilityOptionWording;
@property(retain, nonatomic) FinderLiveInfo *finderLiveInfo; // @synthesize finderLiveInfo=_finderLiveInfo;
@property(nonatomic) __weak MMFinderLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(retain, nonatomic) UITableView *optionsTableView; // @synthesize optionsTableView=_optionsTableView;
@property(retain, nonatomic) UILabel *coverImageHintLabel; // @synthesize coverImageHintLabel=_coverImageHintLabel;
@property(retain, nonatomic) UIView *coverImageHintLabelShadingView; // @synthesize coverImageHintLabelShadingView=_coverImageHintLabelShadingView;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *coverImageContainerView; // @synthesize coverImageContainerView=_coverImageContainerView;
@property(retain, nonatomic) RichTextView *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) MMLiveScrollGradientMaskingView *scrollMaskingView; // @synthesize scrollMaskingView=_scrollMaskingView;
@property(copy, nonatomic) CDUnknownBlockType commitBlock; // @synthesize commitBlock=_commitBlock;
- (void)updateCoverImage;
- (void)initializeStrategy;
- (void)initializeComponents;
- (void)onCoverImageTapped;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (id)initWithLiveTask:(id)arg1 finderLiveInfo:(id)arg2 commentVisibilityOptionWording:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

