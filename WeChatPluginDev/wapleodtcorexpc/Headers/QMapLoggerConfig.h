//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface QMapLoggerConfig : NSObject
{
    _Bool _toFile;
    _Bool _toConsole;
    int _level;
    NSArray *_tags;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) int level; // @synthesize level=_level;
@property(nonatomic) _Bool toConsole; // @synthesize toConsole=_toConsole;
@property(nonatomic) _Bool toFile; // @synthesize toFile=_toFile;

@end

