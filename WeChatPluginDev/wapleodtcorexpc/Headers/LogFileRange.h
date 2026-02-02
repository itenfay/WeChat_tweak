//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface LogFileRange : NSObject
{
    unsigned long long _startPos;
    unsigned long long _endPos;
}

@property(nonatomic) unsigned long long endPos; // @synthesize endPos=_endPos;
@property(nonatomic) unsigned long long startPos; // @synthesize startPos=_startPos;
- (id)init;
- (id)initWithStartPos:(unsigned long long)arg1 endPos:(unsigned long long)arg2;

@end

