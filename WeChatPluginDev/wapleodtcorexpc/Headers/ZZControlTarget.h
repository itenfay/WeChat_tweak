//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface ZZControlTarget : NSObject
{
    CDUnknownBlockType _senderBlock;
    unsigned long long _controlEvents;
}

@property(nonatomic) unsigned long long controlEvents; // @synthesize controlEvents=_controlEvents;
@property(copy, nonatomic) CDUnknownBlockType senderBlock; // @synthesize senderBlock=_senderBlock;
- (void)senderMethod:(id)arg1;
- (id)initWithSenderBlock:(CDUnknownBlockType)arg1 controlEvents:(unsigned long long)arg2;

@end
