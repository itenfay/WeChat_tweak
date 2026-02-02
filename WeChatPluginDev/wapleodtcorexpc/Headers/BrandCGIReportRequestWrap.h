//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@class ClickCommandRequest;

@interface BrandCGIReportRequestWrap : NSObject
{
    unsigned int _eventID;
    ClickCommandRequest *_request;
    CDUnknownBlockType _completionBlock;
}

+ (id)requestWrapWithEventID:(unsigned int)arg1 request:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) ClickCommandRequest *request; // @synthesize request=_request;
@property(nonatomic) unsigned int eventID; // @synthesize eventID=_eventID;

@end
