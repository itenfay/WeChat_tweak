//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>
typedef void (^CDUnknownBlockType)(void);

@interface WCRedesignBaseItemContentView : UIView
{
    CDUnknownBlockType _subviewLayoutHandler;
}

@property(copy, nonatomic) CDUnknownBlockType subviewLayoutHandler; // @synthesize subviewLayoutHandler=_subviewLayoutHandler;
- (void)layoutSubviews;

@end
