//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMAnimatedImageDecodeConfig : NSObject
{
    _Bool _isSupportAPNG;
    _Bool _shouldShowWxamMark;
    unsigned int _maxWidth;
    NSString *_cpKey;
}

+ (void)updateMaxWidth:(unsigned int)arg1;
+ (id)defaultConfigWithoutMaxWidthLimit;
+ (id)defaultConfigWithMaxWidthLimit;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowWxamMark; // @synthesize shouldShowWxamMark=_shouldShowWxamMark;
@property(nonatomic) unsigned int maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;
@property(nonatomic) _Bool isSupportAPNG; // @synthesize isSupportAPNG=_isSupportAPNG;
- (void)ignoreMaxWidthLimit;
- (id)init;

@end

