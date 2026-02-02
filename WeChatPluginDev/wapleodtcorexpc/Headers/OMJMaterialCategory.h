//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface OMJMaterialCategory : NSObject
{
    unsigned long long _scene;
    unsigned long long _identifier;
    NSString *_categoryName;
    NSString *_previewImageURL;
    NSArray *_materialInfos;
    SharedPtr_93f81c78 _backingCategory;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) SharedPtr_93f81c78 backingCategory; // @synthesize backingCategory=_backingCategory;
@property(readonly, nonatomic) NSArray *materialInfos; // @synthesize materialInfos=_materialInfos;
@property(readonly, nonatomic) NSString *previewImageURL; // @synthesize previewImageURL=_previewImageURL;
@property(readonly, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBackingCategory:(SharedPtr_93f81c78)arg1;
- (id)initWithScene:(unsigned long long)arg1 identifier:(unsigned long long)arg2 categoryName:(id)arg3 previewImageURL:(id)arg4 materialInfo:(id)arg5;

@end

