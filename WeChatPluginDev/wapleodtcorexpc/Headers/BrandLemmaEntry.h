//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface BrandLemmaEntry : NSObject
{
    NSString *_key;
    NSArray *_contents;
    NSMutableDictionary *_typeToContent;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *typeToContent; // @synthesize typeToContent=_typeToContent;
@property(retain, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (id)getLemmaForType:(unsigned int)arg1 locale:(id)arg2;

@end

