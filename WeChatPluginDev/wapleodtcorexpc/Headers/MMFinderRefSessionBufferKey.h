//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderRefSessionBufferKey : NSObject
{
    int _scene;
    NSString *_tid;
    NSString *_sessionExtraKey;
}

+ (id)keyWithTid:(id)arg1 scene:(int)arg2 extraKey:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sessionExtraKey; // @synthesize sessionExtraKey=_sessionExtraKey;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;

@end

