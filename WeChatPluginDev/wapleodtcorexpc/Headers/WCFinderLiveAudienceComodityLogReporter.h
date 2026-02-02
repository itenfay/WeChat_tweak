//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLiveAudienceComodityLogReporter : NSObject
{
    NSString *_event;
    NSString *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *event; // @synthesize event=_event;
- (void)reportFinderLiveAudienceComodityAction:(id)arg1 event:(id)arg2 params:(id)arg3;

@end

