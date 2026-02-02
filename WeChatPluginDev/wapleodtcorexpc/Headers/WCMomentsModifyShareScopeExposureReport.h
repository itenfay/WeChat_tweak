//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMomentsModifyShareScopeExposureReport : NSObject
{
    _Bool _didClickModifyShareScope;
    NSString *_feedId;
    unsigned long long _exposureScene;
}

+ (void)doReportWithDataItem:(id)arg1 presentingVC:(id)arg2 didClickModifyShareScope:(_Bool)arg3;
+ (void)doReportWithDataItem:(id)arg1 exposureScene:(unsigned long long)arg2 didClickModifyShareScope:(_Bool)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool didClickModifyShareScope; // @synthesize didClickModifyShareScope=_didClickModifyShareScope;
@property(nonatomic) unsigned long long exposureScene; // @synthesize exposureScene=_exposureScene;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (id)generateReoprtString;
- (void)report;

@end

