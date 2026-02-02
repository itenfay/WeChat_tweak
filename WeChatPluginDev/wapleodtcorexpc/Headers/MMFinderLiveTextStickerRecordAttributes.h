//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMFinderLiveTextStickerRecordAttributes
{
    NSString *_text;
    double _colorR;
    double _colorG;
    double _colorB;
    double _colorA;
    unsigned long long _style;
    unsigned long long _templateType;
    NSString *_templateThumbnail;
    NSString *_templateResourceId;
    NSString *_templateResourceUri;
    NSString *_templateResourceMd5Hash;
    NSString *_templateUnextractedResourcePath;
    NSString *_templateExtractedResourcePath;
}

+ (id)stickerRecordAttributesFromItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *templateExtractedResourcePath; // @synthesize templateExtractedResourcePath=_templateExtractedResourcePath;
@property(retain, nonatomic) NSString *templateUnextractedResourcePath; // @synthesize templateUnextractedResourcePath=_templateUnextractedResourcePath;
@property(retain, nonatomic) NSString *templateResourceMd5Hash; // @synthesize templateResourceMd5Hash=_templateResourceMd5Hash;
@property(retain, nonatomic) NSString *templateResourceUri; // @synthesize templateResourceUri=_templateResourceUri;
@property(retain, nonatomic) NSString *templateResourceId; // @synthesize templateResourceId=_templateResourceId;
@property(retain, nonatomic) NSString *templateThumbnail; // @synthesize templateThumbnail=_templateThumbnail;
@property(nonatomic) unsigned long long templateType; // @synthesize templateType=_templateType;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) double colorA; // @synthesize colorA=_colorA;
@property(nonatomic) double colorB; // @synthesize colorB=_colorB;
@property(nonatomic) double colorG; // @synthesize colorG=_colorG;
@property(nonatomic) double colorR; // @synthesize colorR=_colorR;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (id)stickerItemFromRecordAttributes;
- (id)initWithStickerItem:(id)arg1;

@end

