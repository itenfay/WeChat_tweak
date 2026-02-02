//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WSSearchBarTagHolder : NSObject
{
    unsigned int _type;
    NSString *_displayTag;
    NSString *_tagName;
    NSMutableDictionary *_extInfo;
    struct _NSRange _range;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) NSMutableDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(retain, nonatomic) NSString *displayTag; // @synthesize displayTag=_displayTag;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (void)setExternalInfo:(id)arg1 forKey:(id)arg2;
- (id)getExternalInfoByKey:(id)arg1;
- (id)initWithName:(id)arg1 withType:(unsigned int)arg2;

@end

