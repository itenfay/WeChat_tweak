//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray;

@interface WANativeBufferItem : NSObject
{
    NSData *_buffer;
    NSMutableArray *_waitingBlock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *waitingBlock; // @synthesize waitingBlock=_waitingBlock;
@property(retain, nonatomic) NSData *buffer; // @synthesize buffer=_buffer;
- (id)initWithLock;
- (id)init;

@end

