//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UILabel.h>

@class CALayer, NSMutableArray;

@interface MMMusicLyricPlayingLabel : UILabel
{
    CALayer *_maskLayer;
    NSMutableArray *_lineMaskLayers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *lineMaskLayers; // @synthesize lineMaskLayers=_lineMaskLayers;
@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
- (void)resume;
- (void)pause;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 animateDuration:(double)arg3;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)setText:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

