//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface ThreeWayExpandImageView : UIView
{
    UIImage *_leftImage;
    UIImage *_middleImage;
    UIImage *_rightImage;
    int _expandMode;
    UIImageView *_leftImageView;
    UIImageView *_middleImageView;
    UIImageView *_rightImageView;
}

- (void).cxx_destruct;
@property(nonatomic) int expandMode; // @synthesize expandMode=_expandMode;
@property(retain, nonatomic) UIImage *rightImage; // @synthesize rightImage=_rightImage;
@property(retain, nonatomic) UIImage *middleImage; // @synthesize middleImage=_middleImage;
@property(retain, nonatomic) UIImage *leftImage; // @synthesize leftImage=_leftImage;
- (void)layoutSubviews;
- (id)init;

@end

