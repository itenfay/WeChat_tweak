//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UIView;

@interface WCWebSearchBar
{
    _Bool _didExposedCancelButton;
    _Bool _didExposedClearButton;
    UIButton *_actionButton;
    UIButton *_searchButton;
    UIView *_seperatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *seperatorView; // @synthesize seperatorView=_seperatorView;
@property(nonatomic) _Bool didExposedClearButton; // @synthesize didExposedClearButton=_didExposedClearButton;
@property(nonatomic) _Bool didExposedCancelButton; // @synthesize didExposedCancelButton=_didExposedCancelButton;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (void)showClearButtonSpace:(_Bool)arg1;
- (id)newTextField;
- (void)layoutSubviews;
- (void)showsCancelButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setActionButtonHidden:(_Bool)arg1;
- (void)assembleRightSeperator;
- (void)assembleRightActionButton:(id)arg1;
- (void)assembleSearchButtonWith:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

