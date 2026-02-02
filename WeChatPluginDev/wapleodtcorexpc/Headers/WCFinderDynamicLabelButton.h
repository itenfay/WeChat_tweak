//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel;

@interface WCFinderDynamicLabelButton : UIButton
{
    UIImageView *_iconImageView;
    UILabel *_textLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)updateImageWithNormal:(id)arg1 selected:(id)arg2 liked:(_Bool)arg3;
- (void)updateTextWithContent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2 text:(id)arg3;

@end

