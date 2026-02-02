//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMTipsAction : NSObject
{
    NSString *_title;
    id _target;
    SEL _selector;
    CDUnknownBlockType _handler;
    long long _style;
}

- (void).cxx_destruct;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

