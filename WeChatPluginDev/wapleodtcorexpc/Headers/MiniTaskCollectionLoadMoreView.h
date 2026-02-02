//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMUIButton, UIImageView;
@protocol MiniTaskCollectionLoadMoreViewDelegate;

@interface MiniTaskCollectionLoadMoreView : UICollectionReusableView
{
    long long _section;
    id <MiniTaskCollectionLoadMoreViewDelegate> _delegate;
    MMUIButton *_loadMoreButton;
    UIImageView *_iconImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) MMUIButton *loadMoreButton; // @synthesize loadMoreButton=_loadMoreButton;
@property(nonatomic) __weak id <MiniTaskCollectionLoadMoreViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long section; // @synthesize section=_section;
- (void)layoutSubviews;
- (void)onLoadMoreButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

