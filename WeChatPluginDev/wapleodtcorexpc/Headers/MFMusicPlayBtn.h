//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class TextFlowView, UIImageView;

@interface MFMusicPlayBtn : UIButton
{
    TextFlowView *_flowview;
    UIImageView *_iView;
}

- (void).cxx_destruct;
- (void)setupFlowTextView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

