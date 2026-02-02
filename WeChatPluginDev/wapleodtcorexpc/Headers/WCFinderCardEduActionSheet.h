//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, RichTextView, UIImage, UIImageView, UILabel, UIView;

@interface WCFinderCardEduActionSheet
{
    NSString *_titleString;
    NSString *_descString;
    UIImage *_cardImage;
    UIView *_tipsView;
    MMUIButton *_closeBtn;
    UILabel *_titleLabel;
    RichTextView *_descTextView;
    UIImageView *_eduImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *eduImageView; // @synthesize eduImageView=_eduImageView;
@property(retain, nonatomic) RichTextView *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) UIImage *cardImage; // @synthesize cardImage=_cardImage;
@property(copy, nonatomic) NSString *descString; // @synthesize descString=_descString;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void)didClickClose;
- (id)getTipsActionSheetView;
- (double)getCustomView:(double)arg1;
- (double)heightOfWholeSheet;

@end

