//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, WCFinderHeadImageView, WCFinderLiveHomePageEntertainmentTeamupAvatarInfo;

@interface WCFinderLiveHomePageEntertainmentTeamupAvatarView : UIView
{
    WCFinderHeadImageView *_imageView;
    WCFinderLiveHomePageEntertainmentTeamupAvatarInfo *_info;
    UIImageView *_placeHolder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(retain, nonatomic) WCFinderLiveHomePageEntertainmentTeamupAvatarInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) WCFinderHeadImageView *imageView; // @synthesize imageView=_imageView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateWithInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

