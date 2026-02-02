//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MPChannelBizInfo : NSObject
{
    unsigned int _bizUin;
    NSString *_bizHeadImgUrl;
    NSString *_bizUsrName;
}

+ (void)initialize;
+ (void)PBArrayAdd_bizUsrName;
+ (void)PBArrayAdd_bizUin;
+ (void)PBArrayAdd_bizHeadImgUrl;
- (void).cxx_destruct;
@property(nonatomic) unsigned int bizUin; // @synthesize bizUin=_bizUin;
@property(copy, nonatomic) NSString *bizUsrName; // @synthesize bizUsrName=_bizUsrName;
@property(copy, nonatomic) NSString *bizHeadImgUrl; // @synthesize bizHeadImgUrl=_bizHeadImgUrl;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

