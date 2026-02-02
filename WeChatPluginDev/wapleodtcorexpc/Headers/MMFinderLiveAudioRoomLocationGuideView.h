//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, MMUIImageView, MMUILabel, NSMutableArray, UIButton, UILabel, UIView;

@interface MMFinderLiveAudioRoomLocationGuideView
{
    CDUnknownBlockType _actionBlock;
    CDUnknownBlockType _dismissBlock;
    MMFinderLiveTaskId *_taskId;
    MMUILabel *_titleLabel;
    UIView *_squareView;
    UIButton *_confirmBtn;
    UIButton *_cancelBtn;
    UIView *_anchorCircle;
    MMUIImageView *_anchorImage;
    UIView *_locationContainerView;
    MMUIImageView *_locationIconView;
    UILabel *_locationLabel;
    NSMutableArray *_circles;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *circles; // @synthesize circles=_circles;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) MMUIImageView *locationIconView; // @synthesize locationIconView=_locationIconView;
@property(retain, nonatomic) UIView *locationContainerView; // @synthesize locationContainerView=_locationContainerView;
@property(retain, nonatomic) MMUIImageView *anchorImage; // @synthesize anchorImage=_anchorImage;
@property(retain, nonatomic) UIView *anchorCircle; // @synthesize anchorCircle=_anchorCircle;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIView *squareView; // @synthesize squareView=_squareView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)onClickedCancel;
- (void)onClickedConfirm;
- (id)liveTask;
- (void)dealloc;
- (void)showWithAnimated:(_Bool)arg1;
- (void)layoutUI;
- (id)createCircleView:(_Bool)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1;

@end

