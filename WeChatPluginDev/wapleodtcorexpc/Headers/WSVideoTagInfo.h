//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WSVideoTagInfo : NSObject
{
    unsigned int _actionType;
    unsigned int _category;
    NSString *_tagId;
    NSString *_tagWording;
    NSString *_nsUrl;
    NSString *_title;
    NSString *_subTitle;
    NSString *_prefixIconUrl;
}

+ (id)ArrayFromJSON:(id)arg1;
+ (id)FromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *prefixIconUrl; // @synthesize prefixIconUrl=_prefixIconUrl;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *nsUrl; // @synthesize nsUrl=_nsUrl;
@property(nonatomic) unsigned int category; // @synthesize category=_category;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *tagWording; // @synthesize tagWording=_tagWording;
@property(retain, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
- (id)generateDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

