//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAppTaskTransitInfo : NSObject
{
    NSString *_adUxInfo;
    NSString *_commonUxInfo;
    NSString *_traceId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(copy, nonatomic) NSString *commonUxInfo; // @synthesize commonUxInfo=_commonUxInfo;
@property(retain, nonatomic) NSString *adUxInfo; // @synthesize adUxInfo=_adUxInfo;
- (id)description;

@end

