//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>
typedef void (^CDUnknownBlockType)(void);

@interface MMMinimizeLiveIndicatorView : UIView
{
    CDUnknownBlockType _layoutBlock;
}

@property(copy, nonatomic) CDUnknownBlockType layoutBlock; // @synthesize layoutBlock=_layoutBlock;
- (void)layoutSubviews;

@end
