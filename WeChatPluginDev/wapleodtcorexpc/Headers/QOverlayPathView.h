//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIColor;

@interface QOverlayPathView
{
    UIColor *_strokeColor;
    UIColor *_fillColor;
    double _lineWidth;
    double _alpha;
}

- (void).cxx_destruct;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (void)onDidAdd;
- (void)onUpdateAlpha:(double)arg1;
- (_Bool)alphaShouldUpdateWhenLoaded;
- (id)init;

@end

