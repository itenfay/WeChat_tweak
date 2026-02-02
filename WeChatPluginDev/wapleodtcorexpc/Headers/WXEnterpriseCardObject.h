//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WXEnterpriseCardObject : NSObject
{
    NSString *_cardInfo;
    long long _msgType;
}

+ (id)object;
- (void).cxx_destruct;
@property(nonatomic) long long msgType; // @synthesize msgType=_msgType;
@property(retain, nonatomic) NSString *cardInfo; // @synthesize cardInfo=_cardInfo;

@end

