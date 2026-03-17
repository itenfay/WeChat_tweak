//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer;

@interface BTFixedFinderItemView : NSObject
{
    CAGradientLayer *_colorMaskLayer;
}

@property(retain, nonatomic) CAGradientLayer *colorMaskLayer; // @synthesize colorMaskLayer=_colorMaskLayer;
- (void)layoutCoverContainerView:(id)arg1;
- (void)setupCoverContainer:(id)arg1;

@end

