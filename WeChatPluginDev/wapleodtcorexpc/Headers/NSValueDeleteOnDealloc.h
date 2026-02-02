//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSValue.h>

@interface NSValueDeleteOnDealloc : NSValue
{
    NSValue *_value;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSValue *value; // @synthesize value=_value;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)dealloc;

@end

