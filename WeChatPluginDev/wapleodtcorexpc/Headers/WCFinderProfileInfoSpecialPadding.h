//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderProfileInfoSpecialPadding : NSObject
{
    NSString *_name;
    long long _preViewTag;
    long long _nextViewTag;
    double _padding;
}

+ (id)createWithName:(id)arg1 padding:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) long long nextViewTag; // @synthesize nextViewTag=_nextViewTag;
@property(nonatomic) long long preViewTag; // @synthesize preViewTag=_preViewTag;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@end

