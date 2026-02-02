//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface LSTargetWrap : NSObject
{
    NSString *_string;
    NSString *_prefix;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
- (id)initWithTarget:(id)arg1;

@end

