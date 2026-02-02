//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MPPageDownloadedTemplateRecord, MPPageTemplateInfo;

@interface MPPageDownloadingTemplateInfo : NSObject
{
    _Bool _isInvalid;
    unsigned int _scene;
    MPPageTemplateInfo *_templateInfo;
    MPPageDownloadedTemplateRecord *_record;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool isInvalid; // @synthesize isInvalid=_isInvalid;
@property(retain, nonatomic) MPPageDownloadedTemplateRecord *record; // @synthesize record=_record;
@property(retain, nonatomic) MPPageTemplateInfo *templateInfo; // @synthesize templateInfo=_templateInfo;

@end

