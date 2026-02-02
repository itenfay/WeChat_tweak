//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel, NSString;
@protocol MMFinderLiveShopShelfSubPageHeaderViewDelegate;

@interface MMFinderLiveShopShelfSubPageHeaderView : UIView
{
    id <MMFinderLiveShopShelfSubPageHeaderViewDelegate> _delegate;
    NSString *_title;
    MMUIButton *_closeButton;
    MMUILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <MMFinderLiveShopShelfSubPageHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickLeftButton:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)initView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

