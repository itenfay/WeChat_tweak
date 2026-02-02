//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface NotifyDisplayItemInfo : NSObject
{
    NSString *_topic;
    NSString *_content;
    unsigned long long _maxLine;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long maxLine; // @synthesize maxLine=_maxLine;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;

@end

