//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, RichTextView, WCFinderLiveHomePageFeedEntertainmentGenericNotification;

@interface WCFinderLiveHomePageEntertainmentGenericNotificationView : UIView
{
    UIView *_bgView;
    MMWebImageView *_imageView;
    RichTextView *_titleLabel;
    WCFinderLiveHomePageFeedEntertainmentGenericNotification *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveHomePageFeedEntertainmentGenericNotification *data; // @synthesize data=_data;
@property(retain, nonatomic) RichTextView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void)layoutSubviews;
- (void)updateWithInfo:(id)arg1;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

