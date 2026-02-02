//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class PersonalDesigner, UIButton, UILabel;
@protocol EmoticonLensDesignerViewDelegate;

@interface EmoticonLensDesignerView
{
    id <EmoticonLensDesignerViewDelegate> _delegate;
    UILabel *_tipLabel;
    UILabel *_designerNameLabel;
    UIButton *_button;
    PersonalDesigner *_designer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PersonalDesigner *designer; // @synthesize designer=_designer;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *designerNameLabel; // @synthesize designerNameLabel=_designerNameLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) __weak id <EmoticonLensDesignerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onButtonClick;
- (void)layoutSubviews;
- (void)updateDesignerInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

