//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderOverviewSectionDef : NSObject
{
    int _pbSectionId;
    int _jumpToTabId;
    long long _secType;
    NSString *_reportName;
    NSString *_reportTabName;
    CDUnknownBlockType _saveCache;
    CDUnknownBlockType _fromCache;
    CDUnknownBlockType _contentChecker;
    CDUnknownBlockType _fromPBSection;
    Class _syncPageClass;
    CDUnknownBlockType _syncDataFromPage;
    CDUnknownBlockType _shouldShowTotalCount;
    CDUnknownBlockType _showMoreButtonCondition;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType showMoreButtonCondition; // @synthesize showMoreButtonCondition=_showMoreButtonCondition;
@property(copy, nonatomic) CDUnknownBlockType shouldShowTotalCount; // @synthesize shouldShowTotalCount=_shouldShowTotalCount;
@property(copy, nonatomic) CDUnknownBlockType syncDataFromPage; // @synthesize syncDataFromPage=_syncDataFromPage;
@property(retain, nonatomic) Class syncPageClass; // @synthesize syncPageClass=_syncPageClass;
@property(copy, nonatomic) CDUnknownBlockType fromPBSection; // @synthesize fromPBSection=_fromPBSection;
@property(copy, nonatomic) CDUnknownBlockType contentChecker; // @synthesize contentChecker=_contentChecker;
@property(copy, nonatomic) CDUnknownBlockType fromCache; // @synthesize fromCache=_fromCache;
@property(copy, nonatomic) CDUnknownBlockType saveCache; // @synthesize saveCache=_saveCache;
@property(retain, nonatomic) NSString *reportTabName; // @synthesize reportTabName=_reportTabName;
@property(retain, nonatomic) NSString *reportName; // @synthesize reportName=_reportName;
@property(nonatomic) int jumpToTabId; // @synthesize jumpToTabId=_jumpToTabId;
@property(nonatomic) int pbSectionId; // @synthesize pbSectionId=_pbSectionId;
@property(nonatomic) long long secType; // @synthesize secType=_secType;

@end

