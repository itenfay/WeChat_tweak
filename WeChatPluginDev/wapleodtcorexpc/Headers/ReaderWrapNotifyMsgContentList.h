//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ReaderWrapNotifyMsgContentList : NSObject
{
    _Bool _fontBold;
    NSString *_content;
    long long _type;
    NSString *_colorLight;
    NSString *_colorDark;
    NSString *_picUrl;
    NSString *_nightPicUrl;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nightPicUrl; // @synthesize nightPicUrl=_nightPicUrl;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(nonatomic) _Bool fontBold; // @synthesize fontBold=_fontBold;
@property(retain, nonatomic) NSString *colorDark; // @synthesize colorDark=_colorDark;
@property(retain, nonatomic) NSString *colorLight; // @synthesize colorLight=_colorLight;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

