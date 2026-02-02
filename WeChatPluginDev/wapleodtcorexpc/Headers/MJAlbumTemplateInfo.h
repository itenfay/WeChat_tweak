//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJAlbumTemplateInfo : NSObject
{
    unsigned long long _materialNumMin;
    unsigned long long _materialNumMax;
    NSString *_materialNumSuggest;
}

+ (void)initialize;
+ (void)PBArrayAdd_materialNumSuggest;
+ (void)PBArrayAdd_materialNumMax;
+ (void)PBArrayAdd_materialNumMin;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *materialNumSuggest; // @synthesize materialNumSuggest=_materialNumSuggest;
@property(nonatomic) unsigned long long materialNumMax; // @synthesize materialNumMax=_materialNumMax;
@property(nonatomic) unsigned long long materialNumMin; // @synthesize materialNumMin=_materialNumMin;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAlbumTemplateInfo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

