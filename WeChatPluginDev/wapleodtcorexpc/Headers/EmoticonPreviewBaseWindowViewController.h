//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonPreviewModel, MMEmoticonView, MMUIActivityIndicatorView, NSString, UIImageView, UILabel, UIView;

@interface EmoticonPreviewBaseWindowViewController
{
    _Bool _isLoadLocally;
    EmoticonPreviewModel *_model;
    UIImageView *_popoverView;
    MMEmoticonView *_playerView;
    UIView *_playerViewContainer;
    UILabel *_descriptionLabel;
    MMUIActivityIndicatorView *_activityIndicatorView;
    unsigned long long _startLoadingTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLoadLocally; // @synthesize isLoadLocally=_isLoadLocally;
@property(nonatomic) unsigned long long startLoadingTime; // @synthesize startLoadingTime=_startLoadingTime;
@property(retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIView *playerViewContainer; // @synthesize playerViewContainer=_playerViewContainer;
@property(retain, nonatomic) MMEmoticonView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIImageView *popoverView; // @synthesize popoverView=_popoverView;
@property(retain, nonatomic) EmoticonPreviewModel *model; // @synthesize model=_model;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)playEmotionGifIfNeed;
- (void)setPreviewModel:(id)arg1;
- (_Bool)checkIfEmojiDownloaded;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

