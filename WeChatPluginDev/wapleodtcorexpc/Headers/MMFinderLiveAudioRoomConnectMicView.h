//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, MMUIImageView, MMUILabel, RichTextView, UIButton;

@interface MMFinderLiveAudioRoomConnectMicView
{
    _Bool _isLocationAuthorized;
    CDUnknownBlockType _onClickedConnectMic;
    CDUnknownBlockType _dismissBlock;
    MMFinderLiveTaskId *_taskId;
    MMUIImageView *_callImageView;
    MMUILabel *_callLabel;
    RichTextView *_showLocationView;
    MMUILabel *_showLocationLabel;
    UIButton *_connectMicBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *connectMicBtn; // @synthesize connectMicBtn=_connectMicBtn;
@property(retain, nonatomic) MMUILabel *showLocationLabel; // @synthesize showLocationLabel=_showLocationLabel;
@property(retain, nonatomic) RichTextView *showLocationView; // @synthesize showLocationView=_showLocationView;
@property(retain, nonatomic) MMUILabel *callLabel; // @synthesize callLabel=_callLabel;
@property(retain, nonatomic) MMUIImageView *callImageView; // @synthesize callImageView=_callImageView;
@property(nonatomic) _Bool isLocationAuthorized; // @synthesize isLocationAuthorized=_isLocationAuthorized;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) CDUnknownBlockType onClickedConnectMic; // @synthesize onClickedConnectMic=_onClickedConnectMic;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)onClickedShowLocation;
- (void)onClickedBtn;
- (id)audienceLogReporter;
- (id)locationWording;
- (id)liveTask;
- (void)dealloc;
- (void)showWithAnimated:(_Bool)arg1;
- (void)layoutUI;
- (void)setupUI;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1 isLocationAuthorized:(_Bool)arg2;

@end

