//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImageView, UILabel, UIView, WCProgressMaskView, WCVideoProducerTemplateCellViewModel;

@interface WCVideoProducerTemplateCardView : UICollectionViewCell
{
    _Bool _isAnimPlaying;
    WCVideoProducerTemplateCellViewModel *_cellVM;
    UIView *_templateCardContainerView;
    UILabel *_templateNameLabel;
    UIImageView *_templateCardImageView;
    UIView *_launchMJAppTipsCardView;
    UIView *_selectedMaskView;
    WCProgressMaskView *_progressMaskView;
    NSString *_loadedAnimFilePath;
}

+ (double)maxNameLabelHeight;
+ (id)headerIdentifier;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAnimPlaying; // @synthesize isAnimPlaying=_isAnimPlaying;
@property(retain, nonatomic) NSString *loadedAnimFilePath; // @synthesize loadedAnimFilePath=_loadedAnimFilePath;
@property(retain, nonatomic) WCProgressMaskView *progressMaskView; // @synthesize progressMaskView=_progressMaskView;
@property(retain, nonatomic) UIView *selectedMaskView; // @synthesize selectedMaskView=_selectedMaskView;
@property(retain, nonatomic) UIView *launchMJAppTipsCardView; // @synthesize launchMJAppTipsCardView=_launchMJAppTipsCardView;
@property(retain, nonatomic) UIImageView *templateCardImageView; // @synthesize templateCardImageView=_templateCardImageView;
@property(retain, nonatomic) UILabel *templateNameLabel; // @synthesize templateNameLabel=_templateNameLabel;
@property(retain, nonatomic) UIView *templateCardContainerView; // @synthesize templateCardContainerView=_templateCardContainerView;
@property(retain, nonatomic) WCVideoProducerTemplateCellViewModel *cellVM; // @synthesize cellVM=_cellVM;
- (void)updateSubviewForPropertyKeyPath:(id)arg1;
- (id)observingPropertyKeyPathsForViewModel;
- (void)viewModel:(id)arg1 didChangeProperty:(id)arg2 fromOldValue:(id)arg3 toNewValue:(id)arg4;
- (void)didChangeViewModel:(id)arg1 fromOldObject:(id)arg2 toNewObject:(id)arg3;
- (void)_resetPreviewDefaultImage;
- (void)_stopPreviewAnim;
- (void)_startPreviewAnimWithDecoder:(id)arg1;
- (void)_loadPreviewAnimFromLocalFilePath:(id)arg1 andPlay:(_Bool)arg2;
- (void)_loadPreviewAnimAndPlay:(_Bool)arg1;
- (void)_updateTemplateNameLabelAccessibility;
- (void)_loadTemplateNameLabel;
- (void)_loadTemplateCardImage;
- (void)_initLaunchMJAppTipsCardViewIfNeeded;
- (void)_initView;
- (void)stopPlayingDemo;
- (void)startPlayingDemo;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

