//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCMomentsTigerReporter : NSObject
{
    NSMutableDictionary *_operationDictionary;
    long long _scene;
    NSString *_timelineSessionID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *timelineSessionID; // @synthesize timelineSessionID=_timelineSessionID;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (id)generateLogStringWithOperation:(id)arg1;
- (void)report;
- (void)didClickDataItem:(id)arg1;
- (void)didDisplayDataItem:(id)arg1;
- (_Bool)hasDisplayedDataItem:(id)arg1;
- (_Bool)isDataItemValid:(id)arg1;
- (void)clearOperationDictionary;
- (id)getOrCreateOperationWithDataItem:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *operationDictionary; // @synthesize operationDictionary=_operationDictionary;

@end

