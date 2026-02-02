//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderEventConfigModel : NSObject
{
    NSString *_finderNickname;
    NSString *_eventName;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(copy, nonatomic) NSString *finderNickname; // @synthesize finderNickname=_finderNickname;
- (_Bool)isValid;

@end

