//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, SightIconView, WCFinderShareCoverImageView;

@interface WCFinderSharePreConfirmView : UIView
{
    double _coverWidth;
    WCFinderShareCoverImageView *_coverImageView;
    SightIconView *_playIconView;
    MMUIButton *_memberFlagButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *memberFlagButton; // @synthesize memberFlagButton=_memberFlagButton;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) WCFinderShareCoverImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) double coverWidth; // @synthesize coverWidth=_coverWidth;
- (struct CGSize)coverSizeWithMediaItem:(id)arg1;
- (void)renderWithFinderShareItem:(id)arg1;
- (id)init;

@end

