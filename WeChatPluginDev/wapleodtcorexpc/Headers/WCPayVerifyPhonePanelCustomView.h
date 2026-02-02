//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface WCPayVerifyPhonePanelCustomView : UIView
{
    UILabel *_titleLabel;
    UILabel *_descLabel;
    NSString *_title;
    NSString *_desc;
}

- (void).cxx_destruct;
@property(retain) NSString *desc; // @synthesize desc=_desc;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateDescLabel;
- (void)updateTitleLabel;
- (void)layoutSubviews;

@end

