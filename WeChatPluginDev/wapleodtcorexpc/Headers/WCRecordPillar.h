//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CALayer, CAShapeLayer, UIColor;

@interface WCRecordPillar : NSObject
{
    _Bool _bSelectedShowHigher;
    unsigned int _index;
    float _lastStartTo;
    float _lastEndTo;
    double _pillarHeight;
    CAShapeLayer *_layer;
    UIColor *_color;
    CALayer *_superLayer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak CALayer *superLayer; // @synthesize superLayer=_superLayer;
@property(nonatomic) float lastEndTo; // @synthesize lastEndTo=_lastEndTo;
@property(nonatomic) float lastStartTo; // @synthesize lastStartTo=_lastStartTo;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) CAShapeLayer *layer; // @synthesize layer=_layer;
@property(nonatomic) double pillarHeight; // @synthesize pillarHeight=_pillarHeight;
@property(nonatomic) _Bool bSelectedShowHigher; // @synthesize bSelectedShowHigher=_bSelectedShowHigher;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
- (id)getShapeLayer;
- (id)initWithIndex:(unsigned int)arg1 SuperLayer:(id)arg2 color:(id)arg3;

@end

