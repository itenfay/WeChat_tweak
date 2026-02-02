//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FullScreenInputReporter : NSObject
{
    unsigned int _chatType;
    NSString *_sessionID;
}

+ (void)reportAction:(unsigned int)arg1;
+ (id)reporter;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int chatType; // @synthesize chatType=_chatType;

@end

