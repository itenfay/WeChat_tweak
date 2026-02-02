//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface BrandLemmaContent : NSObject
{
    unsigned int _type;
    NSDictionary *_i18n;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *i18n; // @synthesize i18n=_i18n;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (id)getLemmaForLocale:(id)arg1;

@end

