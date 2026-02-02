//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TPOptionalParamManager : NSObject
{
    NSMutableDictionary *_paramNameDic;
    NSMutableDictionary *_paramValueDic;
}

+ (id)shaderManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *paramValueDic; // @synthesize paramValueDic=_paramValueDic;
@property(retain, nonatomic) NSMutableDictionary *paramNameDic; // @synthesize paramNameDic=_paramNameDic;
- (id)getParamKeyArray;
- (id)getParamValueForkey:(id)arg1;
- (unsigned long long)getOptionalIDForKey:(id)arg1;
- (void)addParamValue:(id)arg1 forString:(id)arg2;
- (void)addParamValue:(id)arg1 forKey:(unsigned long long)arg2;
- (void)paramDictionarySetTPOptionalParam;
- (id)init;

@end

