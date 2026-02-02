//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMDynamicColor;

@interface TrueDashLineBoarderView : UIView
{
    double _lineLength;
    double _cornerRadius;
    MMDynamicColor *_color;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMDynamicColor *color; // @synthesize color=_color;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double lineLength; // @synthesize lineLength=_lineLength;
- (void)drawDashLineBoarder;
- (void)layoutSubviews;

@end

