//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WCFinderMemberCommentInputAreaTipsView : UIView
{
    UIImageView *_tipsIcon;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *tipsIcon; // @synthesize tipsIcon=_tipsIcon;
- (void)layoutSubviews;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

