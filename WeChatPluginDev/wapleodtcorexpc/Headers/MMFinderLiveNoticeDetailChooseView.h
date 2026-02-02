//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView, MMUILabel;

@interface MMFinderLiveNoticeDetailChooseView
{
    _Bool _showArr;
    MMUILabel *_topLabel;
    MMUILabel *_detailLabel;
    MMUIImageView *_arrowView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(nonatomic) _Bool showArr; // @synthesize showArr=_showArr;
- (id)accessibilityLabel;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateTopContent:(id)arg1 detailContent:(id)arg2 showArr:(_Bool)arg3;

@end

