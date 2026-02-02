//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUIButton, UILabel, UIView;

@interface WCFinderMentionIgnoreTipsCell : UITableViewCell
{
    CDUnknownBlockType _closeAction;
    UIView *_tipsContainer;
    UILabel *_tipsLabel;
    MMUIButton *_closeBtn;
}

+ (double)heightWithWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *tipsContainer; // @synthesize tipsContainer=_tipsContainer;
@property(copy, nonatomic) CDUnknownBlockType closeAction; // @synthesize closeAction=_closeAction;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;

@end

