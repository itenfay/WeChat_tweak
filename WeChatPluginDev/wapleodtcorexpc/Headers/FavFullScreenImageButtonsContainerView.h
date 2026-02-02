//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class ImageBrowseButton;

@interface FavFullScreenImageButtonsContainerView : UIView
{
    ImageBrowseButton *_circleToSearchButton;
    CDUnknownBlockType _circleToSearchBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType circleToSearchBlock; // @synthesize circleToSearchBlock=_circleToSearchBlock;
@property(retain, nonatomic) ImageBrowseButton *circleToSearchButton; // @synthesize circleToSearchButton=_circleToSearchButton;
- (void)hideCircleToSearchButton;
- (void)showImageInfo:(id)arg1;
- (void)onClickCircleToSearchButton:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

