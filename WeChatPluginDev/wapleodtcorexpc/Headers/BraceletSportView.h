//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class BraceletStepScoreView, DailySportRecord, DeviceRankDetailResonse, NSString;
@protocol BraceletSportRecordDelegate;

@interface BraceletSportView : UIView
{
    _Bool _isSelf;
    id <BraceletSportRecordDelegate> _delegate;
    long long _scene;
    DailySportRecord *_sportRecord;
    unsigned long long _dateType;
    DeviceRankDetailResonse *_rankDetail;
    BraceletStepScoreView *_stepView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BraceletStepScoreView *stepView; // @synthesize stepView=_stepView;
@property(nonatomic) _Bool isSelf; // @synthesize isSelf=_isSelf;
@property(retain, nonatomic) DeviceRankDetailResonse *rankDetail; // @synthesize rankDetail=_rankDetail;
@property(nonatomic) unsigned long long dateType; // @synthesize dateType=_dateType;
@property(retain, nonatomic) DailySportRecord *sportRecord; // @synthesize sportRecord=_sportRecord;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <BraceletSportRecordDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickAppWithFinderUsername:(id)arg1 records:(id)arg2;
- (void)onClickAppWithWAContact:(id)arg1;
- (void)onClickSportRecord:(id)arg1;
- (void)onClickLikeButton:(id)arg1;
- (void)onClickHistoryButton;
- (id)genTitleView;
- (void)initSubview;
- (void)layoutSubviews;
- (void)clickUnlikeAnimate:(_Bool)arg1;
- (void)clickLikeAnimate:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 dailySportRecord:(id)arg2 dateType:(unsigned long long)arg3 isSelf:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1 rankDetail:(id)arg2 isSelf:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

