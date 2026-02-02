//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface OMJMaterialInfo : NSObject
{
    unsigned long long _scene;
    NSString *_identifier;
    long long _version;
    NSString *_materialName;
    NSString *_previewImageURL;
    NSString *_downloadURL;
    NSDictionary *_extraInfo;
    NSArray *_vocalFiltersParams;
    SharedPtr_3c77faaa _backingInfo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) SharedPtr_3c77faaa backingInfo; // @synthesize backingInfo=_backingInfo;
@property(readonly, nonatomic) NSArray *vocalFiltersParams; // @synthesize vocalFiltersParams=_vocalFiltersParams;
@property(readonly, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(readonly, nonatomic) NSString *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(readonly, nonatomic) NSString *previewImageURL; // @synthesize previewImageURL=_previewImageURL;
@property(readonly, nonatomic) NSString *materialName; // @synthesize materialName=_materialName;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBackingInfo:(SharedPtr_3c77faaa)arg1;
- (id)initWithScene:(unsigned long long)arg1 identifier:(id)arg2 version:(long long)arg3 materialName:(id)arg4 previewImageURL:(id)arg5 downloadURL:(id)arg6 extraInfo:(id)arg7 vocalFiltersParams:(id)arg8;
- (id)initWithScene:(unsigned long long)arg1 identifier:(id)arg2 version:(long long)arg3 materialName:(id)arg4 previewImageURL:(id)arg5 downloadURL:(id)arg6 extraInfo:(id)arg7;

@end

