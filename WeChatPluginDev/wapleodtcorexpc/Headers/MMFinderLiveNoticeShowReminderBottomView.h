//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIImageView, MMUILabel, NSString;

@interface MMFinderLiveNoticeShowReminderBottomView
{
    _Bool _showArr;
    int _selectType;
    MMUILabel *_topLabel;
    MMUILabel *_detailLabel;
    MMUIImageView *_arrowView;
    NSString *_topContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *topContent; // @synthesize topContent=_topContent;
@property(retain, nonatomic) MMUIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(nonatomic) _Bool showArr; // @synthesize showArr=_showArr;
@property(nonatomic) int selectType; // @synthesize selectType=_selectType;
- (id)accessibilityLabel;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isAuto;
- (void)updateSelectType:(int)arg1 showArr:(_Bool)arg2 topContent:(id)arg3;

@end

