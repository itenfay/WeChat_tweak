//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MPGetSystemInfoImpl : NSObject
{
    id _context;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id context; // @synthesize context=_context;
- (id)fillOneInfo:(id)arg1;
- (id)fillAppBaseInfo;
- (id)fillWindowInfo;
- (id)fillDeviceInfo;
- (void)copyInfo:(id)arg1 from:(id)arg2 to:(id)arg3;
- (void)makeWindowInfo:(id)arg1 result:(id)arg2;
- (id)fillAllInfo;
- (id)handleJSEvent:(id)arg1;

@end

