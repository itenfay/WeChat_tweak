//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMWebViewPreloadContentMPPageParam : NSObject
{
    _Bool _isOfflineCache;
    unsigned int _templateType;
    unsigned int _templateVersion;
    unsigned int _templateReportId;
    NSString *_pageFrameUrl;
    NSString *_templateFullVersion;
    NSString *_latestTemplateFullVersion;
    NSString *_templateVersionGroup;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isOfflineCache; // @synthesize isOfflineCache=_isOfflineCache;
@property(copy, nonatomic) NSString *templateVersionGroup; // @synthesize templateVersionGroup=_templateVersionGroup;
@property(nonatomic) unsigned int templateReportId; // @synthesize templateReportId=_templateReportId;
@property(copy, nonatomic) NSString *latestTemplateFullVersion; // @synthesize latestTemplateFullVersion=_latestTemplateFullVersion;
@property(copy, nonatomic) NSString *templateFullVersion; // @synthesize templateFullVersion=_templateFullVersion;
@property(nonatomic) unsigned int templateVersion; // @synthesize templateVersion=_templateVersion;
@property(nonatomic) unsigned int templateType; // @synthesize templateType=_templateType;
@property(copy, nonatomic) NSString *pageFrameUrl; // @synthesize pageFrameUrl=_pageFrameUrl;
- (id)description;

@end

