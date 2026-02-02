//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIButton, UIView;

@interface MMFinderLiveOlympicsReserveConfirmView
{
    UIView *_dialogView;
    MMUILabel *_title;
    MMUILabel *_subTitle;
    UIButton *_closeButton;
    UIButton *_reserveButton;
    UIView *_vertLine;
    UIView *_horiLine;
    CDUnknownBlockType _actionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) UIView *horiLine; // @synthesize horiLine=_horiLine;
@property(retain, nonatomic) UIView *vertLine; // @synthesize vertLine=_vertLine;
@property(retain, nonatomic) UIButton *reserveButton; // @synthesize reserveButton=_reserveButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMUILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) MMUILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *dialogView; // @synthesize dialogView=_dialogView;
- (void)onReserveButtonClick:(id)arg1;
- (void)onCloseButtonClick:(id)arg1;
- (void)showWithContact:(id)arg1 liveNoticeInfo:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (void)layoutUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

