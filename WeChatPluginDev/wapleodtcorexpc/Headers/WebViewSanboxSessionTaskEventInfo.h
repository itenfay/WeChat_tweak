//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WebViewSanboxSessionTaskEventInfo : NSObject
{
    NSString *_name;
    unsigned long long _eventTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long eventTime; // @synthesize eventTime=_eventTime;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)descriptionWithStartTime:(unsigned long long)arg1;

@end

