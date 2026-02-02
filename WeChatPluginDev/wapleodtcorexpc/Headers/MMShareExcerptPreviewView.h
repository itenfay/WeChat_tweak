//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIScrollView.h>

@class UIImageView;

@interface MMShareExcerptPreviewView : UIScrollView
{
    UIImageView *_imageView;
    double _bottomInset;
}

- (void).cxx_destruct;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)playDismissAnimation;
- (void)playShowAnimation;
- (void)showInView:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (void)setupImageView:(id)arg1;
- (void)setupUIWithImage:(id)arg1;
- (id)initWithImage:(id)arg1;

@end

