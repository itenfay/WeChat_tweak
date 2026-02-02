//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LineStyleWrap;

@interface TemplateDetailToplineWrap : NSObject
{
    _Bool _hideDashLine;
    unsigned int _smallTextCount;
    LineStyleWrap *_keyWrap;
    LineStyleWrap *_valueWrap;
    LineStyleWrap *_extraWrap;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int smallTextCount; // @synthesize smallTextCount=_smallTextCount;
@property(nonatomic) _Bool hideDashLine; // @synthesize hideDashLine=_hideDashLine;
@property(retain, nonatomic) LineStyleWrap *extraWrap; // @synthesize extraWrap=_extraWrap;
@property(retain, nonatomic) LineStyleWrap *valueWrap; // @synthesize valueWrap=_valueWrap;
@property(retain, nonatomic) LineStyleWrap *keyWrap; // @synthesize keyWrap=_keyWrap;

@end

