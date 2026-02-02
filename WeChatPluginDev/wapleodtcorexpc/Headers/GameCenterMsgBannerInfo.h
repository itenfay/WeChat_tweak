//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface GameCenterMsgBannerInfo : NSObject
{
    NSString *_bannerId;
    NSArray *_wepkgIds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *wepkgIds; // @synthesize wepkgIds=_wepkgIds;
@property(retain, nonatomic) NSString *bannerId; // @synthesize bannerId=_bannerId;

@end

