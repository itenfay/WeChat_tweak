//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCBulletinInfo : NSObject
{
    _Bool _enableDescExtend;
    _Bool _isFromThemeGuide;
    _Bool _showNotice;
    _Bool _isEdit;
    NSString *_descriptionStr;
    NSString *_descriptionExtend;
    NSString *_imageUrl;
    unsigned long long _seq;
    NSString *_reportDescriptionStr;
    NSString *_reportDescriptionExtend;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reportDescriptionExtend; // @synthesize reportDescriptionExtend=_reportDescriptionExtend;
@property(retain, nonatomic) NSString *reportDescriptionStr; // @synthesize reportDescriptionStr=_reportDescriptionStr;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
@property(nonatomic) _Bool isEdit; // @synthesize isEdit=_isEdit;
@property(nonatomic) _Bool showNotice; // @synthesize showNotice=_showNotice;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *descriptionExtend; // @synthesize descriptionExtend=_descriptionExtend;
@property(retain, nonatomic) NSString *descriptionStr; // @synthesize descriptionStr=_descriptionStr;
@property(nonatomic) _Bool isFromThemeGuide; // @synthesize isFromThemeGuide=_isFromThemeGuide;
@property(nonatomic) _Bool enableDescExtend; // @synthesize enableDescExtend=_enableDescExtend;

@end

