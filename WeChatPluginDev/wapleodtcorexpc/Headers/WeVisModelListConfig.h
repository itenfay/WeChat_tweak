//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WeVisModelListConfig : NSObject
{
    long long _sdkVersion;
    long long _configVersion;
    NSMutableArray *_modelList;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *modelList; // @synthesize modelList=_modelList;
@property(nonatomic) long long configVersion; // @synthesize configVersion=_configVersion;
@property(nonatomic) long long sdkVersion; // @synthesize sdkVersion=_sdkVersion;
- (void)reportModelRes:(unsigned int)arg1;
- (id)invalidModelListInfo;
- (id)modelListInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool isValid;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

