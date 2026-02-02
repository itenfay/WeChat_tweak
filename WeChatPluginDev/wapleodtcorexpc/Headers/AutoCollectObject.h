//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface AutoCollectObject : NSObject
{
    NSString *_collectKey;
    NSString *_logTrace;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *logTrace; // @synthesize logTrace=_logTrace;
@property(retain, nonatomic) NSString *collectKey; // @synthesize collectKey=_collectKey;
- (id)initWith:(id)arg1 andLogTrace:(id)arg2;

@end

