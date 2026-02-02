//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface JSEventInvokeContext : NSObject
{
    unsigned int _eventInvokeSource;
    NSString *_eventInvokeSourceWebComptName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *eventInvokeSourceWebComptName; // @synthesize eventInvokeSourceWebComptName=_eventInvokeSourceWebComptName;
@property(nonatomic) unsigned int eventInvokeSource; // @synthesize eventInvokeSource=_eventInvokeSource;

@end

