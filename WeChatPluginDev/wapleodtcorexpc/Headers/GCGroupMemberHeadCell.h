//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCStatusView, MMWebImageView, UILabel, UIView;

@interface GCGroupMemberHeadCell
{
    MMWebImageView *_headImgView;
    GCStatusView *_statusView;
    UIView *_backHeadCircles;
    UIView *_normalContainerView;
    UILabel *_useAsTextLabel;
    MMWebImageView *_leftUpImgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *leftUpImgView; // @synthesize leftUpImgView=_leftUpImgView;
@property(retain, nonatomic) UILabel *useAsTextLabel; // @synthesize useAsTextLabel=_useAsTextLabel;
@property(retain, nonatomic) UIView *normalContainerView; // @synthesize normalContainerView=_normalContainerView;
@property(retain, nonatomic) UIView *backHeadCircles; // @synthesize backHeadCircles=_backHeadCircles;
@property(retain, nonatomic) GCStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) MMWebImageView *headImgView; // @synthesize headImgView=_headImgView;
- (void)playStatusAnimation;
- (void)setHeadCycles:(int)arg1;
- (void)configureWithCellModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

