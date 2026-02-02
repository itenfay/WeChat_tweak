//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol WCFinderDraftUploadProgress;

@interface WCFinderDraftFeedUploadProgress : NSObject
{
    double _value;
    id <WCFinderDraftUploadProgress> _parent;
}

+ (id)progressWithTid:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderDraftUploadProgress> parent; // @synthesize parent=_parent;
@property(nonatomic) double value; // @synthesize value=_value;
- (void)onFinderDataItemPostProgressWithTid:(id)arg1 progress:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

