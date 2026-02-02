//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface LiteAppJsApiGetLiveInfoResult : NSObject
{
    _Bool _isLiving;
    _Bool _isCharge;
    NSString *_objectID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(nonatomic) _Bool isCharge; // @synthesize isCharge=_isCharge;
@property(nonatomic) _Bool isLiving; // @synthesize isLiving=_isLiving;

@end

