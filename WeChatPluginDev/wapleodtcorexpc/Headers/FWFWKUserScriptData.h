//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FWFWKUserScriptInjectionTimeEnumData, NSNumber, NSString;

@interface FWFWKUserScriptData : NSObject
{
    NSString *_source;
    FWFWKUserScriptInjectionTimeEnumData *_injectionTime;
    NSNumber *_isMainFrameOnly;
}

+ (id)fromMap:(id)arg1;
+ (id)makeWithSource:(id)arg1 injectionTime:(id)arg2 isMainFrameOnly:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *isMainFrameOnly; // @synthesize isMainFrameOnly=_isMainFrameOnly;
@property(retain, nonatomic) FWFWKUserScriptInjectionTimeEnumData *injectionTime; // @synthesize injectionTime=_injectionTime;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
- (id)toMap;

@end

