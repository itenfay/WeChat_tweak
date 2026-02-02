//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RichTextView, UIButton, UIImageView, UILabel;
@protocol WCFinderFinderSettingCloseEduViewControllerDelegate;

@interface WCFinderFinderSettingCloseEduViewController
{
    CDUnknownBlockType _closeBlock;
    id <WCFinderFinderSettingCloseEduViewControllerDelegate> _delegate;
    UIImageView *_errImageView;
    UILabel *_titleLabel;
    RichTextView *_descTextView;
    UIButton *_closeButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) RichTextView *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *errImageView; // @synthesize errImageView=_errImageView;
@property(nonatomic) __weak id <WCFinderFinderSettingCloseEduViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
- (void)onClickCloseAction;
- (void)viewDidLoad;

@end

