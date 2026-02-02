//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UIImageView, UITextField;
@protocol WCFinderCommonSearchBarDelegate;

@interface WCFinderCommonSearchBar
{
    _Bool _isEditing;
    UITextField *_textField;
    id <WCFinderCommonSearchBarDelegate> _delegate;
    UIImageView *_searchImageView;
    UIButton *_clearBtn;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) UIButton *clearBtn; // @synthesize clearBtn=_clearBtn;
@property(retain, nonatomic) UIImageView *searchImageView; // @synthesize searchImageView=_searchImageView;
@property(nonatomic) __weak id <WCFinderCommonSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)endTyping:(id)arg1;
- (void)onClickClearAction;
- (void)layoutAllSubviews;
- (void)setUpView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

