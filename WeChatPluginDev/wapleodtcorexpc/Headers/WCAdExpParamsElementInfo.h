//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdExpParamsElementInfo : NSObject
{
    _Bool _report;
    NSString *_expId;
    NSString *_expValue;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool report; // @synthesize report=_report;
@property(retain, nonatomic) NSString *expValue; // @synthesize expValue=_expValue;
@property(retain, nonatomic) NSString *expId; // @synthesize expId=_expId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

