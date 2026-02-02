//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface OMJTemplateRecommendResult : NSObject
{
    _Bool _hasMoreTemplates;
    _Bool _enableSingleTemplateMusicRec;
    NSArray *_categories;
    NSString *_pagingContext;
    NSArray *_additionTemplateInfos;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *additionTemplateInfos; // @synthesize additionTemplateInfos=_additionTemplateInfos;
@property(readonly, nonatomic) _Bool enableSingleTemplateMusicRec; // @synthesize enableSingleTemplateMusicRec=_enableSingleTemplateMusicRec;
@property(readonly, nonatomic) NSString *pagingContext; // @synthesize pagingContext=_pagingContext;
@property(readonly, nonatomic) _Bool hasMoreTemplates; // @synthesize hasMoreTemplates=_hasMoreTemplates;
@property(readonly, nonatomic) NSArray *categories; // @synthesize categories=_categories;
- (id)description;
- (id)initWithBackingResult:(const void *)arg1;

@end

