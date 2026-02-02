//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdChannelReportExtendInfoModel;

@interface WCAdChannelReportModel : NSObject
{
    int _scene;
    WCAdChannelReportExtendInfoModel *_extInfo;
    NSString *_snsid;
    NSString *_uxinfo;
    NSString *_adExtInfo;
    NSString *_aid;
}

- (void).cxx_destruct;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(retain, nonatomic) NSString *adExtInfo; // @synthesize adExtInfo=_adExtInfo;
@property(retain, nonatomic) NSString *uxinfo; // @synthesize uxinfo=_uxinfo;
@property(retain, nonatomic) NSString *snsid; // @synthesize snsid=_snsid;
@property(retain, nonatomic) WCAdChannelReportExtendInfoModel *extInfo; // @synthesize extInfo=_extInfo;
- (id)initWithHeader:(id)arg1;

@end

