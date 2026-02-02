//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface YYClassInfo : NSObject
{
    _Bool _needUpdate;
    _Bool _isMeta;
    Class _cls;
    Class _superCls;
    Class _metaCls;
    NSString *_name;
    YYClassInfo *_superClassInfo;
    NSDictionary *_propertyInfos;
}

+ (id)classInfoWithClassName:(id)arg1;
+ (id)classInfoWithClass:(Class)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *propertyInfos; // @synthesize propertyInfos=_propertyInfos;
@property(readonly, nonatomic) YYClassInfo *superClassInfo; // @synthesize superClassInfo=_superClassInfo;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) _Bool isMeta; // @synthesize isMeta=_isMeta;
@property(readonly, nonatomic) Class metaCls; // @synthesize metaCls=_metaCls;
@property(readonly, nonatomic) Class superCls; // @synthesize superCls=_superCls;
@property(readonly, nonatomic) Class cls; // @synthesize cls=_cls;
- (_Bool)needUpdate;
- (void)setNeedUpdate;
- (void)_update;
- (id)initWithClass:(Class)arg1;

@end

