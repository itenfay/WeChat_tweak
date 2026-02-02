//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, MMWebImageView, WCShareCardJumpToFinderViewData;
@protocol WCShareCardJumpToFinderButtonDelegate;

@interface WCShareCardJumpToFinderView : UIView
{
    WCShareCardJumpToFinderViewData *_data;
    id <WCShareCardJumpToFinderButtonDelegate> _delegate;
    MMUIButton *_jumpButton;
    MMWebImageView *_leftIconImageView;
    MMWebImageView *_rightIconImageView;
    MMUILabel *_buttonLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property(retain, nonatomic) MMWebImageView *rightIconImageView; // @synthesize rightIconImageView=_rightIconImageView;
@property(retain, nonatomic) MMWebImageView *leftIconImageView; // @synthesize leftIconImageView=_leftIconImageView;
@property(retain, nonatomic) MMUIButton *jumpButton; // @synthesize jumpButton=_jumpButton;
@property(nonatomic) __weak id <WCShareCardJumpToFinderButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCShareCardJumpToFinderViewData *data; // @synthesize data=_data;
- (void)onContentButtonClick;
- (_Bool)hasRightIconView;
- (_Bool)hasLeftIconView;
- (void)setAccessibilityLabelToView:(id)arg1 fieldItem:(id)arg2;
- (void)updateContentButton;
- (void)adjustView;
- (void)updateJumpToFinderView;
- (void)updateView;
- (double)getWidth;
- (id)initViewWithCardInfo:(id)arg1 delegate:(id)arg2;

@end

