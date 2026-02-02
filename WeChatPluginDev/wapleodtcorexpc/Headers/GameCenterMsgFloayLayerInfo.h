//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface GameCenterMsgFloayLayerInfo : NSObject
{
    NSString *_url;
    long long _floatLayerType;
    NSArray *_wepkgIds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *wepkgIds; // @synthesize wepkgIds=_wepkgIds;
@property(nonatomic) long long floatLayerType; // @synthesize floatLayerType=_floatLayerType;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;

@end

