//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMWebTopBarStyleConfig : NSObject
{
    _Bool _isHideLoad;
    NSString *_identity;
    unsigned long long _priority;
    NSString *_text;
}

+ (id)topBarStyleWithId:(id)arg1 priority:(unsigned long long)arg2 text:(id)arg3 andHideLoad:(_Bool)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool isHideLoad; // @synthesize isHideLoad=_isHideLoad;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *identity; // @synthesize identity=_identity;
- (_Bool)isValid;

@end

