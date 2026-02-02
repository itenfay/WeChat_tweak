//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WAShareAppMessageThumbImageModel : NSObject
{
    _Bool _shouldCrop;
    _Bool _useOriginImageForSignature;
    unsigned long long _type;
    NSData *_localImageData;
    NSData *_originImageData;
    NSString *_webImageURLString;
    struct CGSize _cropSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useOriginImageForSignature; // @synthesize useOriginImageForSignature=_useOriginImageForSignature;
@property(nonatomic) struct CGSize cropSize; // @synthesize cropSize=_cropSize;
@property(nonatomic) _Bool shouldCrop; // @synthesize shouldCrop=_shouldCrop;
@property(copy, nonatomic) NSString *webImageURLString; // @synthesize webImageURLString=_webImageURLString;
@property(retain, nonatomic) NSData *originImageData; // @synthesize originImageData=_originImageData;
@property(retain, nonatomic) NSData *localImageData; // @synthesize localImageData=_localImageData;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end

