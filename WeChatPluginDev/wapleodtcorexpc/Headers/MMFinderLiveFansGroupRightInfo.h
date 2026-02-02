//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveFansGroupRightInfo : NSObject
{
    unsigned int _level;
    NSString *_desc;
    NSString *_imageUrlString;
    NSString *_imageUrlStringDark;
    NSString *_imageUrlStringLight;
}

+ (id)infoWithLevel:(unsigned int)arg1 desc:(id)arg2 imageUrlString:(id)arg3 imageUrlStringDark:(id)arg4 imageUrlStringLight:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *imageUrlStringLight; // @synthesize imageUrlStringLight=_imageUrlStringLight;
@property(retain, nonatomic) NSString *imageUrlStringDark; // @synthesize imageUrlStringDark=_imageUrlStringDark;
@property(retain, nonatomic) NSString *imageUrlString; // @synthesize imageUrlString=_imageUrlString;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) unsigned int level; // @synthesize level=_level;

@end

