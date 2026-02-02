//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TRTCNetworkQosParam : NSObject
{
    long long _preference;
    long long _controlMode;
}

@property(nonatomic) long long controlMode; // @synthesize controlMode=_controlMode;
@property(nonatomic) long long preference; // @synthesize preference=_preference;
- (id)init;
- (struct TRTCNetworkQosParam)convertToCppParams;

@end

