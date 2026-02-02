//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMWebImageView;
@protocol TingMinimizeContentViewDelegate;

@interface TingMinimizeContentView : UIView
{
    id <TingMinimizeContentViewDelegate> _delegate;
    MMUIButton *_backgroundButton;
    MMWebImageView *_backgroundView;
    MMUIButton *_closeButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MMWebImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMUIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(nonatomic) __weak id <TingMinimizeContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onCoverClicked;
- (void)onCloseButtonClicked;
- (void)setImageURL:(id)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)init;

@end

