//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, UIColor;

@interface EmoticonLensPackageConfig : NSObject
{
    double _version;
    long long _previewType;
    NSString *_subtitle;
    UIColor *_subtitleColor;
    UIColor *_strokeColor;
    NSArray *_paramsList;
    NSDictionary *_params;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSArray *paramsList; // @synthesize paramsList=_paramsList;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) long long previewType; // @synthesize previewType=_previewType;
@property(nonatomic) double version; // @synthesize version=_version;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

