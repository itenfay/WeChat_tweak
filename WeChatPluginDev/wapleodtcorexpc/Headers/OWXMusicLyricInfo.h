//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OWXMusicLyricInfo : NSObject
{
    unsigned int _startTimeInMilliseconds;
    NSString *_content;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned int startTimeInMilliseconds; // @synthesize startTimeInMilliseconds=_startTimeInMilliseconds;
- (id)initWithStartTimeInMilliseconds:(unsigned int)arg1 content:(id)arg2;

@end

