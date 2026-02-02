//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface EmoticonLensItemConfig : NSObject
{
    long long _lensType;
    NSString *_type;
    double _version;
    NSMutableArray *_elements;
    NSMutableDictionary *_params;
    NSString *_id;
    NSString *_nameEn;
    NSString *_nameCn;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nameCn; // @synthesize nameCn=_nameCn;
@property(retain, nonatomic) NSString *nameEn; // @synthesize nameEn=_nameEn;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSMutableArray *elements; // @synthesize elements=_elements;
@property(nonatomic) double version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) long long lensType; // @synthesize lensType=_lensType;
- (void)setAdjust:(_Bool)arg1;
- (_Bool)modelCustomTransformToDictionary:(id)arg1 forConfigTag:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

