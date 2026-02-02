//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdChannelReportHeaderModel : NSObject
{
    int _scene;
    NSString *_snsid;
    NSString *_uxinfo;
    NSString *_adExtInfo;
    NSString *_aid;
}

+ (id)initInner:(id)arg1 snsid:(id)arg2 scene:(int)arg3;
+ (id)genHeader:(id)arg1 uxinfo:(id)arg2 adExtInfo:(id)arg3 aid:(id)arg4 scene:(int)arg5;
+ (id)genHeader:(id)arg1 snsid:(id)arg2 scene:(int)arg3;
- (void).cxx_destruct;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(retain, nonatomic) NSString *adExtInfo; // @synthesize adExtInfo=_adExtInfo;
@property(retain, nonatomic) NSString *uxinfo; // @synthesize uxinfo=_uxinfo;
@property(retain, nonatomic) NSString *snsid; // @synthesize snsid=_snsid;

@end

