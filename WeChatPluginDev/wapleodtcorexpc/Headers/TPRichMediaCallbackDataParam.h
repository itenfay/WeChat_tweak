//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPRichMediaCallbackDataParam : NSObject
{
    long long _seq;
    long long _startTimeMs;
}

@property(nonatomic) long long startTimeMs; // @synthesize startTimeMs=_startTimeMs;
@property(nonatomic) long long seq; // @synthesize seq=_seq;

@end

