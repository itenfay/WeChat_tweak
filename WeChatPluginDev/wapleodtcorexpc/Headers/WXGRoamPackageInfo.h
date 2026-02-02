//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface WXGRoamPackageInfo : NSObject
{
    _Bool _isLast;
    NSData *_data;
    unsigned long long _curOffset;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long curOffset; // @synthesize curOffset=_curOffset;
@property(nonatomic) _Bool isLast; // @synthesize isLast=_isLast;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;

@end

