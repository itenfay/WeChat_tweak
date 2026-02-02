//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface OCRResult : NSObject
{
    unsigned int _ocrId;
    unsigned int _imageType;
    NSString *_oriString;
    NSString *_translation;
    _Bool _newOcrmt;
    unsigned int ocrId;
    unsigned int imageType;
    NSString *oriString;
    NSString *translation;
    NSArray *_translations;
    double _angle;
    NSString *_fromLanguage;
    NSString *_toLanguage;
    NSString *_brandWording;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool newOcrmt; // @synthesize newOcrmt=_newOcrmt;
@property(retain, nonatomic) NSString *brandWording; // @synthesize brandWording=_brandWording;
@property(retain, nonatomic) NSString *toLanguage; // @synthesize toLanguage=_toLanguage;
@property(retain, nonatomic) NSString *fromLanguage; // @synthesize fromLanguage=_fromLanguage;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(retain, nonatomic) NSArray *translations; // @synthesize translations=_translations;
@property(retain, nonatomic) NSString *translation; // @synthesize translation;
@property(retain, nonatomic) NSString *oriString; // @synthesize oriString;
@property(nonatomic) unsigned int imageType; // @synthesize imageType;
@property(nonatomic) unsigned int ocrId; // @synthesize ocrId;

@end

