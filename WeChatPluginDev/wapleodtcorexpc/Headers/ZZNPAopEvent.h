//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ZZNPAopEvent : NSObject
{
    NSString *_tag;
    id _action;
}

+ (id)createWithTag:(id)arg1 action:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) id action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;

@end

