//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderContextIdToken : NSObject
{
    NSString *_contextId;
    NSString *_tabSessionId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tabSessionId; // @synthesize tabSessionId=_tabSessionId;
@property(retain, nonatomic) NSString *contextId; // @synthesize contextId=_contextId;
- (id)description;

@end

