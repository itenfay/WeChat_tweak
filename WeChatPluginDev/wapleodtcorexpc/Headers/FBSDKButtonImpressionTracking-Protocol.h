//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol FBSDKButtonImpressionTracking <NSObject>
@property(readonly, copy, nonatomic) NSString *impressionTrackingIdentifier;
@property(readonly, copy, nonatomic) NSString *impressionTrackingEventName;
@property(readonly, copy, nonatomic) NSDictionary *analyticsParameters;
@end

