//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface WCCommentBackgroundView : UIView
{
    _Bool _showsTopCorners;
    _Bool _showsBottomCorners;
}

@property(nonatomic) _Bool showsBottomCorners; // @synthesize showsBottomCorners=_showsBottomCorners;
@property(nonatomic) _Bool showsTopCorners; // @synthesize showsTopCorners=_showsTopCorners;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

