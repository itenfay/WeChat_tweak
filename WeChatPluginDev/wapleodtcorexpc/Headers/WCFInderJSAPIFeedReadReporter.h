//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface WCFInderJSAPIFeedReadReporter : NSObject
{
    CDUnknownBlockType _reportAction;
    NSMutableSet *_recards;
}

+ (id)reportWithAction:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *recards; // @synthesize recards=_recards;
@property(copy, nonatomic) CDUnknownBlockType reportAction; // @synthesize reportAction=_reportAction;
- (_Bool)filterShouldRecardStatMetaModel:(id)arg1;
- (void)onUpdateStatMetaModel:(id)arg1;
- (id)popInfo;
- (void)commit;
- (id)generateReportInfo;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

