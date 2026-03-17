//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MJAITemplateAssetOptions : NSObject
{
    _Bool _skipAssetPreparation;
    int _cdnAppType;
    int _cdnFileType;
    unsigned long long _scene;
    Class _AIGeneratorClass;
    double _AIGeneratorTimeoutInterval;
}

+ (id)optionsForScene:(unsigned long long)arg1;
@property(nonatomic) _Bool skipAssetPreparation; // @synthesize skipAssetPreparation=_skipAssetPreparation;
@property(nonatomic) double AIGeneratorTimeoutInterval; // @synthesize AIGeneratorTimeoutInterval=_AIGeneratorTimeoutInterval;
@property(nonatomic) Class AIGeneratorClass; // @synthesize AIGeneratorClass=_AIGeneratorClass;
@property(nonatomic) int cdnFileType; // @synthesize cdnFileType=_cdnFileType;
@property(nonatomic) int cdnAppType; // @synthesize cdnAppType=_cdnAppType;
@property(readonly, nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void)_initForFinder;
- (void)_initForMoments;
- (id)init;

@end

