//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURL, OMJMaterialInfo;

@interface MJShootVisageInspectorItem : NSObject
{
    OMJMaterialInfo *_material;
    NSString *_identifier;
    NSString *_name;
    NSURL *_iconURL;
}

+ (id)createEmptyItemWithMaterialScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) OMJMaterialInfo *material; // @synthesize material=_material;
- (_Bool)isEmptyItem;
- (id)initWithMaterial:(id)arg1;

@end

