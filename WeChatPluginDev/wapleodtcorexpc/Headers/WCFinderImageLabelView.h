//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, RichTextView;
@protocol WCFinderImageLabelViewDelegate;

@interface WCFinderImageLabelView : UIView
{
    id <WCFinderImageLabelViewDelegate> _delegate;
    id _dataSource;
    MMWebImageView *_iconImageView;
    RichTextView *_textView;
}

+ (double)getHeightByIconHeight:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) id dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WCFinderImageLabelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutAllSubviews;
- (void)updateWithIconUrl:(id)arg1 content:(id)arg2 width:(double)arg3;
- (void)onClickAction;
- (void)udpateIconImageViewHeight:(double)arg1;
- (void)resetReuseState;
- (id)initWithWidth:(double)arg1 iconHeight:(double)arg2;

@end

