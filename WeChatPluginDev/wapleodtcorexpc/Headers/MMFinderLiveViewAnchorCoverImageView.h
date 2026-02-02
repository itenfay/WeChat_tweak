//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMLiveTaskId, MMUIImageView, MMUIView, MMWebImageView, NSString, UIColor, UIImage, UIImageView;

@interface MMFinderLiveViewAnchorCoverImageView
{
    MMLiveTaskId *_taskId;
    UIImage *_image;
    double _scale;
    MMWebImageView *_liveRoomCoverImageViewForAnchor;
    MMUIView *_contentView;
    MMUIImageView *_midGradientView;
    MMUIView *_topMaskView;
    CAGradientLayer *_gradientLayer;
    NSString *_coverImageURLString;
    double _coverImageViewWidth;
    double _coverImageViewHeight;
    double _coverImageViewScaleRatio;
    double _coverImageViewCenterPercent;
    UIColor *_mainColor;
    UIImageView *_recordLiveBackgroundImageView;
}

+ (void)addBottomCorner:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *recordLiveBackgroundImageView; // @synthesize recordLiveBackgroundImageView=_recordLiveBackgroundImageView;
@property(retain, nonatomic) UIColor *mainColor; // @synthesize mainColor=_mainColor;
@property(nonatomic) double coverImageViewCenterPercent; // @synthesize coverImageViewCenterPercent=_coverImageViewCenterPercent;
@property(nonatomic) double coverImageViewScaleRatio; // @synthesize coverImageViewScaleRatio=_coverImageViewScaleRatio;
@property(nonatomic) double coverImageViewHeight; // @synthesize coverImageViewHeight=_coverImageViewHeight;
@property(nonatomic) double coverImageViewWidth; // @synthesize coverImageViewWidth=_coverImageViewWidth;
@property(retain, nonatomic) NSString *coverImageURLString; // @synthesize coverImageURLString=_coverImageURLString;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) MMUIView *topMaskView; // @synthesize topMaskView=_topMaskView;
@property(retain, nonatomic) MMUIImageView *midGradientView; // @synthesize midGradientView=_midGradientView;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMWebImageView *liveRoomCoverImageViewForAnchor; // @synthesize liveRoomCoverImageViewForAnchor=_liveRoomCoverImageViewForAnchor;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)finderLiveTask;
- (_Bool)showRecordLiveBackgroundImageView;
- (_Bool)isRecordLive;
- (void)createLiveRoomCoverImageViewForAnchor;
- (void)updateAnchorRecordLiveBackgroundImageViewWithCoverImage:(id)arg1;
- (void)inner_updateAnchorLiveRoomCoverImage:(id)arg1;
- (void)updateAnchorLiveRoomCoverImage:(id)arg1;
- (void)updateAnchorLiveRoomCoverImageURLString:(id)arg1;
- (void)updateGradientViewWithImage:(id)arg1;
- (void)refreshWitchScale:(double)arg1 coverImageURLString:(id)arg2;
- (id)playerBottomBarBackgroundColor:(id)arg1;
- (void)layoutUI;
- (_Bool)isPortrait;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

