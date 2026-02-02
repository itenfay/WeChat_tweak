//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WSAllTabRedDotInfo : NSObject
{
    NSMutableDictionary *_tabRedDotInfoMap;
    NSString *_mSessionInAllTabRedDotReportString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mSessionInAllTabRedDotReportString; // @synthesize mSessionInAllTabRedDotReportString=_mSessionInAllTabRedDotReportString;
@property(retain, nonatomic) NSMutableDictionary *tabRedDotInfoMap; // @synthesize tabRedDotInfoMap=_tabRedDotInfoMap;
- (void)clearSessionIn;
- (void)recordSessionIn;
- (id)description;
- (void)clear;
- (id)returnAllTabRedDotInfoReportString;
- (id)returnSessionInAllTabRedDotInfoReportString;
- (void)configureTabContentReddot:(id)arg1 showInfo:(id)arg2 category:(long long)arg3;
- (void)configureTabNumberReddot:(id)arg1 ctrlInfo:(id)arg2 showInfo:(id)arg3 category:(long long)arg4;
- (id)getTabRedDotInfoByCategory:(long long)arg1;
- (id)init;

@end

