//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RichTextView, UIButton, UIView;
@protocol WCFinderCommonTitleDescActionSheetDelegate;

@interface WCFinderCommonTitleDescActionSheet
{
    id <WCFinderCommonTitleDescActionSheetDelegate> _businessDelegate;
    UIView *_tipsView;
    UIButton *_closeBtn;
    RichTextView *_titleTextView;
    RichTextView *_descTextView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) RichTextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(nonatomic) __weak id <WCFinderCommonTitleDescActionSheetDelegate> businessDelegate; // @synthesize businessDelegate=_businessDelegate;
- (id)getTitleDescActionSheetConfig;
- (void)onClickCloseBtn;
- (id)getTipsActionSheetView;
- (double)getCustomView:(double)arg1;
- (double)heightOfWholeSheet;

@end

