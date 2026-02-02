//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface WCPayOpenTouchIDAuthConfirmView
{
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _okBlock;
    UIView *_contentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType okBlock; // @synthesize okBlock=_okBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (float)heightOfBtn;
- (float)topOfBtn;
- (float)topOfSubtitle;
- (float)topOfTitle;
- (float)topOfImg;
- (float)fontSizeOfBtn;
- (float)fontSizeOfSubtitle;
- (float)fontSizeOfTitle;
- (float)widthOfContent;
- (void)show;
- (void)onCancelBtnClick:(id)arg1;
- (void)onOKBtnClick:(id)arg1;
- (id)getHighlightImg:(struct CGRect)arg1;
- (void)setupOpenTouchIDGuiderView;
- (void)setupOpenTouchIDSuccessView;
- (id)initWithType:(int)arg1;

@end

