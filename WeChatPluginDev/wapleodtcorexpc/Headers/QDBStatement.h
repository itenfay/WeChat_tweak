//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QDBStatement : NSObject
{
    void *_statement;
    NSString *_query;
    _Bool _inUse;
}

- (void).cxx_destruct;
@property _Bool inUse; // @synthesize inUse=_inUse;
@property void *statement; // @synthesize statement=_statement;
@property(retain) NSString *query; // @synthesize query=_query;
- (void)reset;
- (void)close;
- (void)dealloc;

@end

