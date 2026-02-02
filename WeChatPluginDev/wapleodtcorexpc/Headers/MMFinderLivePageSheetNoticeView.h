//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLivePageSheetNoticeConfig, NSArray, UILabel;

@interface MMFinderLivePageSheetNoticeView
{
    CDUnknownBlockType _disappearCallback;
    MMFinderLivePageSheetNoticeConfig *_config;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    NSArray *_actionButtons;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *actionButtons; // @synthesize actionButtons=_actionButtons;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMFinderLivePageSheetNoticeConfig *config; // @synthesize config=_config;
@property(copy, nonatomic) CDUnknownBlockType disappearCallback; // @synthesize disappearCallback=_disappearCallback;
- (void)onActionButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (void)pageSheetDidDisappear;
- (void)setupPageSheetConfig;
- (void)initViews;
- (id)initWithConfig:(id)arg1;

@end

