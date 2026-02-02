//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavActivityIndicatorView, FavAttributeCPLabel, MMUIButton, MMUILabel, NSMutableArray, NSString, UIImageView;
@protocol MMFavCellComponentDelegate;

@interface MMFavBaselineComponent
{
    UIImageView *m_logoImgView;
    FavAttributeCPLabel *m_authorNameLabel;
    FavAttributeCPLabel *m_sourceNameLabel;
    MMUILabel *m_nameTailLabel;
    MMUILabel *m_timeLabel;
    MMUILabel *m_dataSizeLabel;
    MMUILabel *m_usedTimesLabel;
    NSMutableArray *m_tagList;
    MMUIButton *m_failButtom;
    FavActivityIndicatorView *m_activityIndicator;
    _Bool m_uploadStatusShowed;
    double m_leftOriginXForTags;
    NSMutableArray *m_tagBtnsArray;
    NSMutableArray *m_tagBtnTitles;
    id <MMFavCellComponentDelegate> _delegate;
}

+ (double)computeHeightWith:(id)arg1 WithOriginX:(double)arg2 MaxOriginX:(double)arg3 ComWidth:(double)arg4 ComHeight:(double)arg5;
+ (_Bool)needShowTagList:(id)arg1;
+ (double)calHeightWithComData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFavCellComponentDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)changeWidth:(double)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHighlightContent:(id)arg1 Keywords:(id)arg2;
- (void)reUpload;
- (id)attachAuthorNameLabel:(id)arg1;
- (void)showFTSInfoInTimeLabel:(id)arg1;
- (void)onClickBtn:(id)arg1;
- (double)realLayoutTagButtons:(id)arg1 WithOriginX:(double)arg2 MaxOriginX:(double)arg3;
- (double)layoutTags:(id)arg1 WithOriginX:(double)arg2 MaxOriginX:(double)arg3;
- (void)layoutSeparatorLineWithOriginX:(double *)arg1 withOriginY:(double)arg2;
- (void)layoutSeparatorLineWithOriginX:(double *)arg1;
- (void)configLabel;
- (void)configContentLayout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

