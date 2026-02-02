//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface RegexRule : NSObject
{
    unsigned short _leftIdentifier;
    unsigned short _rightIdentifier;
    NSString *_pattern;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned short rightIdentifier; // @synthesize rightIdentifier=_rightIdentifier;
@property(nonatomic) unsigned short leftIdentifier; // @synthesize leftIdentifier=_leftIdentifier;
@property(copy, nonatomic) NSString *pattern; // @synthesize pattern=_pattern;
- (id)initWithPattern:(id)arg1 leftIdentifier:(unsigned short)arg2 rightIdentifier:(unsigned short)arg3;

@end

