//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, QArcOverlayAnimation, QArcStyle;

@interface QVisArcLineLayerPayload
{
    QArcStyle *_style;
    NSArray *_lines;
    QArcOverlayAnimation *_animation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QArcOverlayAnimation *animation; // @synthesize animation=_animation;
@property(copy, nonatomic) NSArray *lines; // @synthesize lines=_lines;
@property(retain, nonatomic) QArcStyle *style; // @synthesize style=_style;

@end

