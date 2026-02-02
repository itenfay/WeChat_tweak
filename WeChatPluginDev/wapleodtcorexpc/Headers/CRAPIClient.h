//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CRRequestSession;

@interface CRAPIClient : NSObject
{
    _Bool _enabled;
    CRRequestSession *_session;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) CRRequestSession *session; // @synthesize session=_session;
- (void)dealloc;
- (void)cancelAllRequests;
- (id)initWithSession:(id)arg1;

@end

