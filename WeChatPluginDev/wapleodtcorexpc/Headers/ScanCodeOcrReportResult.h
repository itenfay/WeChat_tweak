//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ScanCodeOcrReportResult : NSObject
{
    int _color;
    float _colorScore;
    int _cls;
    float _clsScore;
    NSString *_ocrText;
}

- (void).cxx_destruct;
@property(nonatomic) float clsScore; // @synthesize clsScore=_clsScore;
@property(nonatomic) int cls; // @synthesize cls=_cls;
@property(nonatomic) float colorScore; // @synthesize colorScore=_colorScore;
@property(nonatomic) int color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *ocrText; // @synthesize ocrText=_ocrText;
- (id)initWithOcrText:(id)arg1 color:(int)arg2 colorScore:(float)arg3 cls:(int)arg4 clsScore:(float)arg5;

@end

