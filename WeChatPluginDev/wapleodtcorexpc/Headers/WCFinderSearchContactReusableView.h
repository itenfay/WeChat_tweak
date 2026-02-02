//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMUIButton, UILabel, UIView;
@protocol WCFinderSearchContactReusableViewDelegate;

@interface WCFinderSearchContactReusableView : UICollectionReusableView
{
    id <WCFinderSearchContactReusableViewDelegate> _delegate;
    UILabel *_titleLabel;
    MMUIButton *_moreButton;
    UIView *_blankView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *blankView; // @synthesize blankView=_blankView;
@property(retain, nonatomic) MMUIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WCFinderSearchContactReusableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateUIWith:(id)arg1 isShowMore:(_Bool)arg2;
- (void)onClickMore:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

