//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, WCFinderContact, WCFinderHeadImageView;

@interface WCFinderLiveHeadImageLivingView : UIView
{
    _Bool _showLiving;
    UIImageView *_liveBorderView;
    UILabel *_liveMarkView;
    WCFinderHeadImageView *_headImageView;
    WCFinderContact *_contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UILabel *liveMarkView; // @synthesize liveMarkView=_liveMarkView;
@property(retain, nonatomic) UIImageView *liveBorderView; // @synthesize liveBorderView=_liveBorderView;
@property(nonatomic) _Bool showLiving; // @synthesize showLiving=_showLiving;
- (void)layoutSubviews;
- (void)initViews;
- (void)updateWithContact:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

