//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface OMJOverlayGuideLineStyle : NSObject
{
    int _lineWeight;
    float _shadowOpacity;
    UIColor *_backgroundColor;
    double _shadowRadius;
    UIColor *_shadowColor;
    struct CGSize _shadowOffset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) float shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) int lineWeight; // @synthesize lineWeight=_lineWeight;
- (id)initWithLineWeight:(int)arg1 backgroundColor:(id)arg2 shadowOpacity:(float)arg3 shadowOffset:(struct CGSize)arg4 shadowRadius:(double)arg5 shadowColor:(id)arg6;
- (id)initWithLineWeight:(int)arg1 backgroundColor:(id)arg2;
- (id)init;

@end

