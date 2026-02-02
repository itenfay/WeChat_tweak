//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, RichTextView, UIImageView;

@interface WCFinderHalfScreenCreateUserVCAcctView : UIView
{
    UIView *_topView;
    UIView *_bottomView;
    UIImageView *_headerImageView;
    RichTextView *_nickNameLabel;
    MMUIButton *_editBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *editBtn; // @synthesize editBtn=_editBtn;
@property(retain, nonatomic) RichTextView *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
- (void)layoutSubviews;
- (id)createSeparateLine;
- (void)setupLayout;
- (void)setNickName:(id)arg1;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

