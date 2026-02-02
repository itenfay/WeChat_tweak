//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CALayer;

@interface MMFinderLiveConcertTicketShadowView : UIView
{
    CALayer *_shadowLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(nonatomic) double shadowRadius;
@property(nonatomic) double shadowOpacity;
@property(nonatomic) struct CGColor *shadowColor;
- (id)initWithSize:(struct CGSize)arg1 cornerRadius:(double)arg2;

@end

