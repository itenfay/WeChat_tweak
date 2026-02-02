//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJCommonTemplateInfo : NSObject
{
    NSString *_title;
    unsigned long long _usageCount;
    NSString *_tplMessage;
    NSString *_previewCovelUrl;
    NSString *_previewCoverFileMd5;
    NSString *_previewVideo_Url;
    NSString *_previewWxamUrl;
    NSString *_previewWxamFileMd5;
    NSString *_previewGifUrl;
    NSString *_previewGifFileMd5;
    NSString *_tmplDescUrl;
    NSString *_tmplDescFileMd5;
    unsigned long long _tmplDescVersion;
}

+ (void)initialize;
+ (void)PBArrayAdd_tmplDescFileMd5;
+ (void)PBArrayAdd_previewGifFileMd5;
+ (void)PBArrayAdd_previewWxamFileMd5;
+ (void)PBArrayAdd_previewCoverFileMd5;
+ (void)PBArrayAdd_previewGifUrl;
+ (void)PBArrayAdd_previewWxamUrl;
+ (void)PBArrayAdd_tmplDescVersion;
+ (void)PBArrayAdd_tmplDescUrl;
+ (void)PBArrayAdd_previewVideo_Url;
+ (void)PBArrayAdd_previewCovelUrl;
+ (void)PBArrayAdd_tplMessage;
+ (void)PBArrayAdd_usageCount;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long tmplDescVersion; // @synthesize tmplDescVersion=_tmplDescVersion;
@property(copy, nonatomic) NSString *tmplDescFileMd5; // @synthesize tmplDescFileMd5=_tmplDescFileMd5;
@property(copy, nonatomic) NSString *tmplDescUrl; // @synthesize tmplDescUrl=_tmplDescUrl;
@property(copy, nonatomic) NSString *previewGifFileMd5; // @synthesize previewGifFileMd5=_previewGifFileMd5;
@property(copy, nonatomic) NSString *previewGifUrl; // @synthesize previewGifUrl=_previewGifUrl;
@property(copy, nonatomic) NSString *previewWxamFileMd5; // @synthesize previewWxamFileMd5=_previewWxamFileMd5;
@property(copy, nonatomic) NSString *previewWxamUrl; // @synthesize previewWxamUrl=_previewWxamUrl;
@property(copy, nonatomic) NSString *previewVideo_Url; // @synthesize previewVideo_Url=_previewVideo_Url;
@property(copy, nonatomic) NSString *previewCoverFileMd5; // @synthesize previewCoverFileMd5=_previewCoverFileMd5;
@property(copy, nonatomic) NSString *previewCovelUrl; // @synthesize previewCovelUrl=_previewCovelUrl;
@property(copy, nonatomic) NSString *tplMessage; // @synthesize tplMessage=_tplMessage;
@property(nonatomic) unsigned long long usageCount; // @synthesize usageCount=_usageCount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCommonTemplateInfo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

