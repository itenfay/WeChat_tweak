//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSURLSession;

@interface MMNetCheck : NSObject
{
    NSURLSession *_session;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void)startHttpCheck:(id)arg1;
- (void)startHttpCheckWithParam:(id)arg1 url:(id)arg2;
- (id)init;

@end

