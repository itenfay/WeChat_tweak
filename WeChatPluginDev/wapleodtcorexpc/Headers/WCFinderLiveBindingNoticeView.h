//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, FinderLiveNoticeInfo, MMUIButton, MMUILabel, MMUIView, WCFinderLiveBindingNoticeMainView;

@interface WCFinderLiveBindingNoticeView
{
    CDUnknownBlockType _createButtonBlock;
    CDUnknownBlockType _bindButtonBlock;
    FinderLiveNoticeInfo *_noticeInfo;
    CAShapeLayer *_shapeLayer;
    MMUIView *_contentView;
    MMUILabel *_titleLabel;
    WCFinderLiveBindingNoticeMainView *_mainView;
    MMUIButton *_createButton;
    MMUIButton *_bindingButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *bindingButton; // @synthesize bindingButton=_bindingButton;
@property(retain, nonatomic) MMUIButton *createButton; // @synthesize createButton=_createButton;
@property(retain, nonatomic) WCFinderLiveBindingNoticeMainView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(copy, nonatomic) CDUnknownBlockType bindButtonBlock; // @synthesize bindButtonBlock=_bindButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType createButtonBlock; // @synthesize createButtonBlock=_createButtonBlock;
- (void)bindButtonClick:(id)arg1;
- (void)createButtonClick:(id)arg1;
- (double)contentViewHeight;
- (void)updateSelfViewShapeClip;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (void)updateData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

