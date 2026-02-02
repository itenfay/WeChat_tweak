//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class RichTextView, UIButton, UIImageView;

@interface WCFinderHalfASGuideView : UIView
{
    CDUnknownBlockType _closeBlock;
    UIView *_topBarView;
    RichTextView *_mTitleView;
    UIImageView *_imgView;
    UIButton *_okButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) RichTextView *mTitleView; // @synthesize mTitleView=_mTitleView;
@property(retain, nonatomic) UIView *topBarView; // @synthesize topBarView=_topBarView;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
- (void)clickOKButton;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

