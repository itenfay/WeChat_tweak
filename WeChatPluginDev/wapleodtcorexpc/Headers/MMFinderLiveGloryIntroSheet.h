//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, MMUIButton, MMUIImageView, MMUILabel, MMWebImageView, UIImageView, UIScrollView;
@protocol MMFinderLiveGloryIntroSheetDelegate;

@interface MMFinderLiveGloryIntroSheet
{
    int _showSource;
    MMFinderLiveTaskId *_taskId;
    id <MMFinderLiveGloryIntroSheetDelegate> _delegate;
    UIScrollView *_contentsContainerView;
    MMUILabel *_titleLabel;
    MMUILabel *_detailLabel;
    UIImageView *_introImageView;
    MMUIButton *_cancelButton;
    MMUIButton *_confirmButton;
    MMWebImageView *_headImageView;
    MMUIImageView *_headImageBoarderView;
}

+ (id)showWithTaskId:(id)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIImageView *headImageBoarderView; // @synthesize headImageBoarderView=_headImageBoarderView;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMUIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIImageView *introImageView; // @synthesize introImageView=_introImageView;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIScrollView *contentsContainerView; // @synthesize contentsContainerView=_contentsContainerView;
@property(nonatomic) __weak id <MMFinderLiveGloryIntroSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) int showSource; // @synthesize showSource=_showSource;
- (id)audienceLogReporter;
- (void)cancelAction;
- (void)confirmAction;
- (id)currentContactHeadURL;
- (_Bool)userFinderStyle;
- (id)liveTask;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithTaskId:(id)arg1 delegate:(id)arg2;

@end

