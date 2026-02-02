//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderRedDotTextLayout : NSObject
{
    unsigned long long _lineNumber;
    NSString *_content;
    double _contentSingleLineWidth;
    double _remainWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double remainWidth; // @synthesize remainWidth=_remainWidth;
@property(nonatomic) double contentSingleLineWidth; // @synthesize contentSingleLineWidth=_contentSingleLineWidth;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (void)setContent:(id)arg1 font:(id)arg2 lineNumber:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

