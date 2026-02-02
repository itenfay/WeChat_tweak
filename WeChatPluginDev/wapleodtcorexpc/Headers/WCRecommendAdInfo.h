//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCRecommendAdInfo : NSObject
{
    NSString *snsXml;
    NSString *snsRecXml;
    NSString *snsRecInfo;
}

@property(retain, nonatomic) NSString *snsRecInfo; // @synthesize snsRecInfo;
@property(retain, nonatomic) NSString *snsRecXml; // @synthesize snsRecXml;
@property(retain, nonatomic) NSString *snsXml; // @synthesize snsXml;
- (id)description;
- (id)init;

@end

