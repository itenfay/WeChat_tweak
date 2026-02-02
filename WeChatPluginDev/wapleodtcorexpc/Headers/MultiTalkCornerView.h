//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface MultiTalkCornerView : UIView
{
    unsigned long long _corner;
    CAShapeLayer *_shapeLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(nonatomic) unsigned long long corner; // @synthesize corner=_corner;
- (unsigned long long)autoresizingMaskForCorner:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 corner:(unsigned long long)arg2;

@end

