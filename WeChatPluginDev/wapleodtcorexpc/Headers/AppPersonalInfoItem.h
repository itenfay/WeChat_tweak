//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface AppPersonalInfoItem : NSObject
{
    NSString *_appID;
    NSString *_infoXml;
}

+ (void)initialize;
+ (void)PBArrayAdd_infoXml;
+ (void)PBArrayAdd_appID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *infoXml; // @synthesize infoXml=_infoXml;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (id)parseXML;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

