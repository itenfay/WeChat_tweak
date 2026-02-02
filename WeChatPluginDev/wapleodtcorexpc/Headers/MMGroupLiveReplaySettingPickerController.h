//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LiveInfo, MMUIButton, MMUILabel, NSString, UIButton, UIImageView, UIView;
@protocol MMGroupLiveReplaySettingPickerControllerDelegate;

@interface MMGroupLiveReplaySettingPickerController
{
    _Bool _enableLiveReplay;
    id <MMGroupLiveReplaySettingPickerControllerDelegate> _settingDelegate;
    LiveInfo *_liveInfo;
    NSString *_roomId;
    UIView *_headerView;
    MMUILabel *_headerTitle;
    UIView *_firstSeperator;
    UIView *_secondSeperator;
    UIView *_thirdSeperator;
    UIView *_closeReplayStatusView;
    MMUILabel *_closeReplayTitle;
    UIImageView *_closeReplayCheckbox;
    UIView *_openReplayStatusView;
    MMUILabel *_openReplayTitle;
    MMUILabel *_openReplaySubtitle;
    UIImageView *_openReplayCheckbox;
    UIButton *_doneButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIImageView *openReplayCheckbox; // @synthesize openReplayCheckbox=_openReplayCheckbox;
@property(retain, nonatomic) MMUILabel *openReplaySubtitle; // @synthesize openReplaySubtitle=_openReplaySubtitle;
@property(retain, nonatomic) MMUILabel *openReplayTitle; // @synthesize openReplayTitle=_openReplayTitle;
@property(retain, nonatomic) UIView *openReplayStatusView; // @synthesize openReplayStatusView=_openReplayStatusView;
@property(retain, nonatomic) UIImageView *closeReplayCheckbox; // @synthesize closeReplayCheckbox=_closeReplayCheckbox;
@property(retain, nonatomic) MMUILabel *closeReplayTitle; // @synthesize closeReplayTitle=_closeReplayTitle;
@property(retain, nonatomic) UIView *closeReplayStatusView; // @synthesize closeReplayStatusView=_closeReplayStatusView;
@property(retain, nonatomic) UIView *thirdSeperator; // @synthesize thirdSeperator=_thirdSeperator;
@property(retain, nonatomic) UIView *secondSeperator; // @synthesize secondSeperator=_secondSeperator;
@property(retain, nonatomic) UIView *firstSeperator; // @synthesize firstSeperator=_firstSeperator;
@property(retain, nonatomic) MMUILabel *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool enableLiveReplay; // @synthesize enableLiveReplay=_enableLiveReplay;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) LiveInfo *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(nonatomic) __weak id <MMGroupLiveReplaySettingPickerControllerDelegate> settingDelegate; // @synthesize settingDelegate=_settingDelegate;
- (id)createHorizontalSeperator;
- (id)createLabel:(id)arg1 withFontSize:(id)arg2 withTextColor:(id)arg3;
- (void)updateCheckBox;
- (void)onCloseButtonClicked;
- (void)onDoneButtonClicked;
- (void)onCloseReplayClicked;
- (void)onOpenReplayClicked;
- (void)layoutPickerList;
- (void)setUpUI;
- (void)viewDidLoad;
- (id)initWithLiveInfo:(id)arg1 roomId:(id)arg2;

// Remaining properties
@property(retain, nonatomic) MMUIButton *closeButton;

@end

