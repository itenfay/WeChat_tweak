//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdSnsPullSelectAdInfo : NSObject
{
    NSString *_snsId;
    NSString *_uxInfo;
    NSString *_costLevel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *costLevel; // @synthesize costLevel=_costLevel;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;
@property(retain, nonatomic) NSString *snsId; // @synthesize snsId=_snsId;

@end

