//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdvertiseInfo;

@interface WCAdStatePublishReportData : NSObject
{
    int _scene;
    WCAdvertiseInfo *_adInfo;
    NSString *_snsId;
}

- (void).cxx_destruct;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *snsId; // @synthesize snsId=_snsId;
@property(retain, nonatomic) WCAdvertiseInfo *adInfo; // @synthesize adInfo=_adInfo;

@end

