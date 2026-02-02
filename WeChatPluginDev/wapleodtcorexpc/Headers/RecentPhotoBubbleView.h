//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class UIImage, UILabel;

@interface RecentPhotoBubbleView : UIButton
{
    UIImage *_originImage;
    UILabel *_textLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImage *originImage; // @synthesize originImage=_originImage;
- (void)dealloc;
- (void)hideRecentPhotoViewAnimated;
- (void)showRecentPhotoViewAnimated;
- (void)layoutSubviews;
- (void)initTextLabel:(id)arg1;
- (void)initBubbleImageView:(id)arg1;
- (void)initBackgroundImage;
- (id)initWithText:(id)arg1 OriginImage:(id)arg2 AndThumbImage:(id)arg3;
- (id)init;

@end

