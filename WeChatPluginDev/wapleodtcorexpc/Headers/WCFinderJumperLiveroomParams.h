//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderJumperLiveroomParams : NSObject
{
    NSString *_feedId;
    NSString *_nonceId;
    unsigned long long _liveId;
    NSString *_sessionBuffer;
    NSString *_bypReportChnlExtra;
}

+ (id)paramsFromLiveLivingStyle:(id)arg1;
+ (id)paramsFromLiveNecessaryParamsJSON:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bypReportChnlExtra; // @synthesize bypReportChnlExtra=_bypReportChnlExtra;
@property(copy, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(copy, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (id)convertToLiveNecessaryParams;

@end

