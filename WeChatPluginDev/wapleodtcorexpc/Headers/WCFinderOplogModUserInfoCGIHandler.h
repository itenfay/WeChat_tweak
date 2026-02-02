//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderOplogModUserInfoCGIHandler : NSObject
{
    Class _respoClass;
    CDUnknownBlockType _callback;
}

+ (id)handlerWithRespClass:(Class)arg1 handler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) Class respoClass; // @synthesize respoClass=_respoClass;

@end

