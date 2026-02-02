//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonLensPackageConfig, NSArray, NSString, UIColor;

@interface EmoticonLensPackage : NSObject
{
    NSString *_packagePath;
    EmoticonLensPackageConfig *_config;
    NSArray *_lensItems;
}

+ (id)unpackLensPackage:(id)arg1 toTargetDir:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *lensItems; // @synthesize lensItems=_lensItems;
@property(retain, nonatomic) EmoticonLensPackageConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSString *packagePath; // @synthesize packagePath=_packagePath;
- (id)initWithConfig:(id)arg1 lensItems:(id)arg2;
@property(readonly, nonatomic) long long previewSize;
@property(readonly, nonatomic) UIColor *strokeColor;
@property(readonly, nonatomic) UIColor *subtitleColor;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSArray *actionTypes;
- (long long)actionType;
@property(readonly, nonatomic) _Bool hasSegment;
- (void)setAutoAdjust:(_Bool)arg1;
- (void)applyToEffectManager:(id)arg1;
- (id)initWithPackageDir:(id)arg1;

@end

