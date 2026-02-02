//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AppServiceCacheEventData : NSObject
{
    unsigned long long _eventType;
    long long _jsEvent;
    NSString *_jsStringEventName;
    NSDictionary *_dicParam;
    unsigned long long _webviewID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long webviewID; // @synthesize webviewID=_webviewID;
@property(retain, nonatomic) NSDictionary *dicParam; // @synthesize dicParam=_dicParam;
@property(copy, nonatomic) NSString *jsStringEventName; // @synthesize jsStringEventName=_jsStringEventName;
@property(nonatomic) long long jsEvent; // @synthesize jsEvent=_jsEvent;
@property(nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;

@end

