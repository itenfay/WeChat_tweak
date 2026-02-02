//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UILabel, UIView, WCFinderHeadImageView;
@protocol WCFinderMSPostHeaderDelegate;

@interface WCFinderMSPostHeader : UITableViewHeaderFooterView
{
    id <WCFinderMSPostHeaderDelegate> _delegate;
    WCFinderHeadImageView *_avatarView;
    UILabel *_nickNameLabel;
    UIView *_inputBackgroundView;
    UILabel *_inputHintLabel;
}

+ (double)headerHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *inputHintLabel; // @synthesize inputHintLabel=_inputHintLabel;
@property(retain, nonatomic) UIView *inputBackgroundView; // @synthesize inputBackgroundView=_inputBackgroundView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) __weak id <WCFinderMSPostHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickInputView;
- (void)setupLayout;
- (void)setupSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

