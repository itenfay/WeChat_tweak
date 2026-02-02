//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, OpenApiErrorParams, UIButton, UIImageView, UIView;

@interface OpenApiErrorViewController
{
    OpenApiErrorParams *_params;
    UIView *_containerView;
    UIImageView *_errImgView;
    MMUILabel *_errDescLabel;
    UIButton *_bottomBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *bottomBtn; // @synthesize bottomBtn=_bottomBtn;
@property(retain, nonatomic) MMUILabel *errDescLabel; // @synthesize errDescLabel=_errDescLabel;
@property(retain, nonatomic) UIImageView *errImgView; // @synthesize errImgView=_errImgView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) OpenApiErrorParams *params; // @synthesize params=_params;
- (void)onBottomBtnClicked;
- (void)viewDidLayoutSubviews;
- (void)initSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithParams:(id)arg1;

@end

