//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NSURL, OMJMaterialInfo;

@interface MJShootFilterItem
{
    float _intensity;
    OMJMaterialInfo *_material;
    NSString *_filterID;
    NSString *_name;
    NSURL *_iconURL;
}

+ (id)createEmptyItem;
- (void).cxx_destruct;
@property(nonatomic) float intensity; // @synthesize intensity=_intensity;
@property(retain, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *filterID; // @synthesize filterID=_filterID;
@property(retain, nonatomic) OMJMaterialInfo *material; // @synthesize material=_material;
- (_Bool)isEmptyItem;
- (id)initWithMaterial:(id)arg1;

@end

