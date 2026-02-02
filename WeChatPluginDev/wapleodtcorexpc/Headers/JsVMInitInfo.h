//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface JsVMInitInfo : NSObject
{
    unsigned long long _beginTime;
    unsigned long long _endTime;
}

@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long beginTime; // @synthesize beginTime=_beginTime;

@end

