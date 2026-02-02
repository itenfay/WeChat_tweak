//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface YTBeautySmoothFilter
{
    double _blurStrength;
    double _whitenStrength;
    double _redStrength;
    struct CGSize _sharpenSize;
}

@property(nonatomic) struct CGSize sharpenSize; // @synthesize sharpenSize=_sharpenSize;
@property(nonatomic) double redStrength; // @synthesize redStrength=_redStrength;
@property(nonatomic) double whitenStrength; // @synthesize whitenStrength=_whitenStrength;
@property(nonatomic) double blurStrength; // @synthesize blurStrength=_blurStrength;
- (void)setUniformsForFilter:(id)arg1 fboSize:(struct CGSize)arg2;
- (id)vertexShaderString;
- (id)fragmentShaderString;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

