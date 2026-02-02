//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCStoryActionToolBarItem : NSObject
{
    _Bool _isDestructive;
    NSString *_title;
    NSString *_iconName;
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) _Bool isDestructive; // @synthesize isDestructive=_isDestructive;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

