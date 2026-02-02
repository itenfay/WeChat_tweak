//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class MMUIButton;
@protocol WCFinderWXInteractiveHeaderViewDelegate;

@interface WCFinderWXInteractiveHeaderView : UIScrollView
{
    MMUIButton *_allBtn;
    MMUIButton *_likeBtn;
    MMUIButton *_fingerBtn;
    MMUIButton *_favBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *favBtn; // @synthesize favBtn=_favBtn;
@property(retain, nonatomic) MMUIButton *fingerBtn; // @synthesize fingerBtn=_fingerBtn;
@property(retain, nonatomic) MMUIButton *likeBtn; // @synthesize likeBtn=_likeBtn;
@property(retain, nonatomic) MMUIButton *allBtn; // @synthesize allBtn=_allBtn;
- (void)changeSelectType:(long long)arg1;
- (void)onClickFavBtn;
- (void)onClickFingerBtn;
- (void)onClickLikeBtn;
- (void)onClickAllBtn;
- (void)layoutAllSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) __weak id <WCFinderWXInteractiveHeaderViewDelegate> delegate;

@end

