//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WXTalkLog : NSObject
{
    unsigned int logId;
    NSString *logStr;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int logId; // @synthesize logId;
@property(retain, nonatomic) NSString *logStr; // @synthesize logStr;
- (void)dealloc;

@end

