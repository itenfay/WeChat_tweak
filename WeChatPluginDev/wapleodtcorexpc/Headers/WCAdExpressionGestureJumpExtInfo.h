//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdRandomPickCardExtInfo, WCAdRandomPickComponentExtInfo;

@interface WCAdExpressionGestureJumpExtInfo : NSObject
{
    NSString *_candidateTwistCardId;
    WCAdRandomPickCardExtInfo *_cardExtInfo;
    WCAdRandomPickComponentExtInfo *_componentExtInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdRandomPickComponentExtInfo *componentExtInfo; // @synthesize componentExtInfo=_componentExtInfo;
@property(retain, nonatomic) WCAdRandomPickCardExtInfo *cardExtInfo; // @synthesize cardExtInfo=_cardExtInfo;
@property(retain, nonatomic) NSString *candidateTwistCardId; // @synthesize candidateTwistCardId=_candidateTwistCardId;
- (_Bool)isValid;

@end

