//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCRecommendMetaInfo : NSObject
{
    int recommendType;
    int source;
    NSString *expId;
    NSString *contentXml;
    NSString *expOriginSnsId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *expOriginSnsId; // @synthesize expOriginSnsId;
@property(retain, nonatomic) NSString *contentXml; // @synthesize contentXml;
@property(retain, nonatomic) NSString *expId; // @synthesize expId;
@property(nonatomic) int source; // @synthesize source;
@property(nonatomic) int recommendType; // @synthesize recommendType;
- (id)description;
- (id)init;

@end

