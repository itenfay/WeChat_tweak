//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface YYTextRunGlyphRange : NSObject
{
    unsigned long long _drawMode;
    struct _NSRange _glyphRangeInRun;
}

+ (id)rangeWithRange:(struct _NSRange)arg1 drawMode:(unsigned long long)arg2;
@property(nonatomic) unsigned long long drawMode; // @synthesize drawMode=_drawMode;
@property(nonatomic) struct _NSRange glyphRangeInRun; // @synthesize glyphRangeInRun=_glyphRangeInRun;

@end

