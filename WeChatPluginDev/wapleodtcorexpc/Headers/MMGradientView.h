//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray, NSString;

@interface MMGradientView : UIView
{
    NSArray *_colors;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) struct CGPoint endPoint;
@property(nonatomic) struct CGPoint startPoint;
@property(copy, nonatomic) NSArray *locations;

// Remaining properties
@property(retain, nonatomic) CAGradientLayer *layer; // @dynamic layer;

@end

