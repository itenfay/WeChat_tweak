//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdUxInfo : NSObject
{
    NSString *_aid;
    NSString *_traceId;
    NSString *_gdtAId;
    NSString *_adSrcTrigger;
    NSString *_ts;
    NSString *_circleId;
    NSString *_contractFlag;
    NSString *_slotId;
    NSString *_empty1;
    NSString *_token;
    NSString *_tid;
    NSString *_siteSet;
    NSString *_adSource;
    NSString *_wuid;
}

+ (id)parseFromUxInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *wuid; // @synthesize wuid=_wuid;
@property(retain, nonatomic) NSString *adSource; // @synthesize adSource=_adSource;
@property(retain, nonatomic) NSString *siteSet; // @synthesize siteSet=_siteSet;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *empty1; // @synthesize empty1=_empty1;
@property(retain, nonatomic) NSString *slotId; // @synthesize slotId=_slotId;
@property(retain, nonatomic) NSString *contractFlag; // @synthesize contractFlag=_contractFlag;
@property(retain, nonatomic) NSString *circleId; // @synthesize circleId=_circleId;
@property(retain, nonatomic) NSString *ts; // @synthesize ts=_ts;
@property(retain, nonatomic) NSString *adSrcTrigger; // @synthesize adSrcTrigger=_adSrcTrigger;
@property(retain, nonatomic) NSString *gdtAId; // @synthesize gdtAId=_gdtAId;
@property(retain, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(retain, nonatomic) NSString *aid; // @synthesize aid=_aid;

@end

