//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GCLabelDynamicLayout : NSObject
{
    double _labelFontSize;
    double _labelHeight;
    double _oriLabelheight;
    double _isBold;
    double _horizonalMargin;
}

@property(nonatomic) double horizonalMargin; // @synthesize horizonalMargin=_horizonalMargin;
@property(nonatomic) double isBold; // @synthesize isBold=_isBold;
@property(nonatomic) double oriLabelheight; // @synthesize oriLabelheight=_oriLabelheight;
@property(nonatomic) double labelHeight; // @synthesize labelHeight=_labelHeight;
@property(nonatomic) double labelFontSize; // @synthesize labelFontSize=_labelFontSize;
- (id)fontWithIsBold:(_Bool)arg1;
- (id)labelFont;
- (double)diffWithOriLineHeight;
- (void)configBtn:(id)arg1;
- (void)configLabel:(id)arg1 isBold:(_Bool)arg2;
- (void)configLabel:(id)arg1;
- (id)initWithBasicFontSize:(double)arg1 lineHeight:(double)arg2;

@end

