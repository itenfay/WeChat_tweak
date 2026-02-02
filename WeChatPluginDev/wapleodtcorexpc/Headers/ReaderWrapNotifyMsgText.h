//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ReaderWrapNotifyMsgText : NSObject
{
    _Bool _bBold;
    unsigned int _maxLineCount;
    NSString *_text;
    NSString *_lightColorStr;
    NSString *_darkColorStr;
    double _size;
    double _lineHeight;
    NSArray *_contentList;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *contentList; // @synthesize contentList=_contentList;
@property(nonatomic) unsigned int maxLineCount; // @synthesize maxLineCount=_maxLineCount;
@property(nonatomic) _Bool bBold; // @synthesize bBold=_bBold;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) double size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *darkColorStr; // @synthesize darkColorStr=_darkColorStr;
@property(retain, nonatomic) NSString *lightColorStr; // @synthesize lightColorStr=_lightColorStr;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (id)darkColor;
- (id)lightColor;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

