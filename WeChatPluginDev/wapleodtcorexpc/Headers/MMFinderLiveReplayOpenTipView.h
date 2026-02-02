//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUIImageView, MMUILabel, UIView;

@interface MMFinderLiveReplayOpenTipView
{
    _Bool _isChargableLive;
    _Bool _isMemberLive;
    _Bool _isAgreementChecked;
    _Bool _isMemberAgreementChecked;
    _Bool _showMemberReplaySwitch;
    unsigned long long _replayState;
    CDUnknownBlockType _createReplayBlock;
    MMUILabel *_titleLabel;
    MMUILabel *_detailLabel;
    MMUIImageView *_headImageView;
    MMUIButton *_closeButton;
    MMUIButton *_createReplayButton;
    MMUIButton *_agreementCheckbox;
    MMUIButton *_agreementButton;
    MMUILabel *_introduceLabel;
    MMUILabel *_memberLabel;
    MMUIButton *_memberAgreementCheckbox;
    MMUIButton *_memberAgreementButton;
    UIView *_topSepelateLine;
    UIView *_midSelateLine;
    UIView *_bottomSepelateLine;
    UIView *_contentView;
    double _currentHeight;
}

+ (double)getDetailHeight:(double)arg1;
+ (double)getLiveReplayOpenTipViewHeight:(unsigned int)arg1 showMemberReplaySwitch:(_Bool)arg2 width:(double)arg3;
- (void).cxx_destruct;
@property(nonatomic) double currentHeight; // @synthesize currentHeight=_currentHeight;
@property(nonatomic) _Bool showMemberReplaySwitch; // @synthesize showMemberReplaySwitch=_showMemberReplaySwitch;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *bottomSepelateLine; // @synthesize bottomSepelateLine=_bottomSepelateLine;
@property(retain, nonatomic) UIView *midSelateLine; // @synthesize midSelateLine=_midSelateLine;
@property(retain, nonatomic) UIView *topSepelateLine; // @synthesize topSepelateLine=_topSepelateLine;
@property(nonatomic) _Bool isMemberAgreementChecked; // @synthesize isMemberAgreementChecked=_isMemberAgreementChecked;
@property(retain, nonatomic) MMUIButton *memberAgreementButton; // @synthesize memberAgreementButton=_memberAgreementButton;
@property(retain, nonatomic) MMUIButton *memberAgreementCheckbox; // @synthesize memberAgreementCheckbox=_memberAgreementCheckbox;
@property(retain, nonatomic) MMUILabel *memberLabel; // @synthesize memberLabel=_memberLabel;
@property(retain, nonatomic) MMUILabel *introduceLabel; // @synthesize introduceLabel=_introduceLabel;
@property(nonatomic) _Bool isAgreementChecked; // @synthesize isAgreementChecked=_isAgreementChecked;
@property(retain, nonatomic) MMUIButton *agreementButton; // @synthesize agreementButton=_agreementButton;
@property(retain, nonatomic) MMUIButton *agreementCheckbox; // @synthesize agreementCheckbox=_agreementCheckbox;
@property(retain, nonatomic) MMUIButton *createReplayButton; // @synthesize createReplayButton=_createReplayButton;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMUILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType createReplayBlock; // @synthesize createReplayBlock=_createReplayBlock;
@property(nonatomic) _Bool isMemberLive; // @synthesize isMemberLive=_isMemberLive;
@property(nonatomic) _Bool isChargableLive; // @synthesize isChargableLive=_isChargableLive;
@property(nonatomic) unsigned long long replayState; // @synthesize replayState=_replayState;
- (void)leftButtonAction;
- (void)createReplayAction;
- (void)updateMemberAccessbility;
- (void)updateAccessbility;
- (void)onMemberCheckBoxClicked;
- (void)onCheckBoxClicked;
- (double)contentViewHeight;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (_Bool)canShowMemberLabel;
- (void)createUI;
- (void)updateData:(unsigned long long)arg1 isMemberLive:(_Bool)arg2 isChargableLive:(_Bool)arg3 showMemberReplaySwitch:(_Bool)arg4 height:(double)arg5;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

