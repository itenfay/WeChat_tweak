//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMJILinkAppClientParams, OMJILinkContextParams;

@interface OMJILinkParams : NSObject
{
    OMJILinkContextParams *_contextParams;
    OMJILinkAppClientParams *_appClientParams;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) OMJILinkAppClientParams *appClientParams; // @synthesize appClientParams=_appClientParams;
@property(readonly, nonatomic) OMJILinkContextParams *contextParams; // @synthesize contextParams=_contextParams;
- (id)initWithContextParams:(id)arg1 appClientParams:(id)arg2;

@end

