//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJCaptionLabel, MJSegmentViewModel;

@interface MJCaptionSegmentCell
{
    MJSegmentViewModel *_segmentVM;
    MJCaptionLabel *_captionLabel;
    struct CGRect _currentBounds;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect currentBounds; // @synthesize currentBounds=_currentBounds;
@property(retain, nonatomic) MJCaptionLabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(retain, nonatomic) MJSegmentViewModel *segmentVM; // @synthesize segmentVM=_segmentVM;
- (_Bool)checkViewModel;
- (void)syncWithMutation;
- (void)setupWithSegmentViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)layoutCaptionLabels;
- (void)layoutCaptionLabel:(id)arg1 withTimeRange:(CDStruct_e83c9415)arg2;
- (void)hideCaptionLabelsAnimated:(_Bool)arg1;
- (void)showCaptionLabelsAnimated:(_Bool)arg1;
- (void)setupCaptionLabels;
- (id)captionLabelWithText:(id)arg1 subText:(id)arg2;
- (id)captionSegment;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

