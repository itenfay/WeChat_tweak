//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface GenericPair : NSObject
{
    id _first;
    id _second;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id second; // @synthesize second=_second;
@property(retain, nonatomic) id first; // @synthesize first=_first;
- (id)initWithFirst:(id)arg1 second:(id)arg2;

@end

