//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QSegmentText : NSObject
{
    int _startIndex;
    int _endIndex;
    NSString *_name;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int endIndex; // @synthesize endIndex=_endIndex;
@property(nonatomic) int startIndex; // @synthesize startIndex=_startIndex;

@end

