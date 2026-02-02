//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class NSString;

@interface NewLifePrivateContentRouteParameter : NSObject
{
    _Bool _animated;
    NSString *_message;
    CDUnknownBlockType _didEnterCallback;
}

@property(copy, nonatomic) CDUnknownBlockType didEnterCallback; // @synthesize didEnterCallback=_didEnterCallback;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (id)description;

@end
