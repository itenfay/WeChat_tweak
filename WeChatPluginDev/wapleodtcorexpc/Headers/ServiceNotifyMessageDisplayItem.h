//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ServiceNotifyMessageDisplayItem : NSObject
{
    NSString *_topic;
    NSString *_content;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

