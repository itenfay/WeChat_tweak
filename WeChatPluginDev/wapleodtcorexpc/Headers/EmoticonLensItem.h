//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonLensItemConfig, NSString;

@interface EmoticonLensItem : NSObject
{
    NSString *_itemPath;
    EmoticonLensItemConfig *_config;
}

+ (id)readItemInDir:(id)arg1;
+ (id)buildItemAtDir:(id)arg1 type:(long long)arg2 version:(double)arg3 serverConfigPath:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonLensItemConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSString *itemPath; // @synthesize itemPath=_itemPath;
- (void)setAutoAdjust:(_Bool)arg1;
- (_Bool)validate;
@property(readonly, nonatomic) long long type;
- (void)buildConfigJson;
- (void)pickParams:(id)arg1;
- (void)addResourceDir:(id)arg1 params:(id)arg2;
- (id)initWithConfig:(id)arg1 dir:(id)arg2;

@end

