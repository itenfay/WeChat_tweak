//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UIView, WCPayCss;

@interface WCPayLQTDepositDetailCell : UITableViewCell
{
    _Bool _invaild;
    UIView *_container;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIView *_lineView;
    WCPayCss *_css;
    NSString *_title;
    NSString *_desc;
}

- (void).cxx_destruct;
@property _Bool invaild; // @synthesize invaild=_invaild;
@property(retain) NSString *desc; // @synthesize desc=_desc;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) WCPayCss *css; // @synthesize css=_css;
@property(retain) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) UIView *container; // @synthesize container=_container;
- (void)updateLineView;
- (void)updateDescLabel;
- (void)updateTitleLabel;
- (void)updateTitle:(id)arg1 desc:(id)arg2 invaild:(_Bool)arg3;
- (void)updateContainer;
- (void)layoutSubviews;

@end

