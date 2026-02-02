//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveCreateNoticeReporter, MMUIButton, UILabel;
@protocol MMFinderLiveCreateNoticeHintViewDelegate;

@interface MMFinderLiveCreateNoticeHintView : UIView
{
    MMFinderLiveCreateNoticeReporter *_createNoticeReporter;
    id <MMFinderLiveCreateNoticeHintViewDelegate> _delegate;
    UIView *_contentView;
    MMUIButton *_closeButton;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    MMUIButton *_createButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *createButton; // @synthesize createButton=_createButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <MMFinderLiveCreateNoticeHintViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveCreateNoticeReporter *createNoticeReporter; // @synthesize createNoticeReporter=_createNoticeReporter;
- (void)dismiss;
- (void)onCloseButtonTapped;
- (void)onCreateButtonTapped;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithGuideInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

