//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WXAuthInternal : NSObject
{
    NSString *scope;
    NSString *state;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *state; // @synthesize state;
@property(retain, nonatomic) NSString *scope; // @synthesize scope;
- (id)init;

@end

