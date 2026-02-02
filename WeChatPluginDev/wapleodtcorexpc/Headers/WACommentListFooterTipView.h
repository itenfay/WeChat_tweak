//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSString, UIView;

@interface WACommentListFooterTipView
{
    UIView *_leftLineView;
    UIView *_rightLineView;
    MMUILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *rightLineView; // @synthesize rightLineView=_rightLineView;
@property(retain, nonatomic) UIView *leftLineView; // @synthesize leftLineView=_leftLineView;
@property(retain, nonatomic) NSString *labelText;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

