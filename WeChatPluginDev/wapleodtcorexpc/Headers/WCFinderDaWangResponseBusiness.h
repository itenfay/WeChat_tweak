//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderDaWangResponseBusiness : NSObject
{
    _Bool _needFreeFlow;
    NSString *_freeFlowType;
    NSString *_freeFlowLogoContent;
    NSString *_appId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *freeFlowLogoContent; // @synthesize freeFlowLogoContent=_freeFlowLogoContent;
@property(copy, nonatomic) NSString *freeFlowType; // @synthesize freeFlowType=_freeFlowType;
@property(nonatomic) _Bool needFreeFlow; // @synthesize needFreeFlow=_needFreeFlow;

@end

