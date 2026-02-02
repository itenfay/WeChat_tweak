//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMOption : NSObject
{
    _Bool _enabled;
    NSString *_content;
}

+ (id)OptionWithContent:(id)arg1 enabled:(_Bool)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) NSString *content; // @synthesize content=_content;
- (id)description;
- (id)initWithContent:(id)arg1 enabled:(_Bool)arg2;

@end

