//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, UIButton;

@interface TextStatePublishGuideView : UIView
{
    CDUnknownBlockType _completionHandler;
    MMUILabel *_titleLabel;
    MMUILabel *_subtitleLabel;
    UIButton *_knowButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *knowButton; // @synthesize knowButton=_knowButton;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)onTapKnowButton;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

