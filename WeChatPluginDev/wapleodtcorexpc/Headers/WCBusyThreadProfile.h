//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface WCBusyThreadProfile : NSObject
{
    unsigned int _thread;
    NSArray *_callTree;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *callTree; // @synthesize callTree=_callTree;
@property(nonatomic) unsigned int thread; // @synthesize thread=_thread;
- (id)initWithThread:(unsigned int)arg1 callTree:(id)arg2;

@end

