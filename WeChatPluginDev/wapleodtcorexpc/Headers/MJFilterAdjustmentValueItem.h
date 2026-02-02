//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, NSURL, OMJMaterialInfo;

@interface MJFilterAdjustmentValueItem
{
    float _intensity;
    NSString *_filterID;
    NSString *_options;
    NSString *_name;
    NSURL *_iconURL;
    OMJMaterialInfo *_material;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OMJMaterialInfo *material; // @synthesize material=_material;
@property(retain, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(nonatomic) float intensity; // @synthesize intensity=_intensity;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *filterID; // @synthesize filterID=_filterID;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)initWithMaterial:(id)arg1;

@end

