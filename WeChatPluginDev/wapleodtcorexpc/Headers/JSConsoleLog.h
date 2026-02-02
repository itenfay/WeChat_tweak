//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface JSConsoleLog : NSObject
{
    unsigned int _jsLogLevel;
    NSString *_jsLogInfo;
}

+ (id)extractLogInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int jsLogLevel; // @synthesize jsLogLevel=_jsLogLevel;
@property(retain, nonatomic) NSString *jsLogInfo; // @synthesize jsLogInfo=_jsLogInfo;
- (id)init;

@end

