//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveKtvThemeItemFetchingByObjectIdProvider : NSObject
{
    unsigned long long _objectId;
    unsigned long long _liveId;
    NSString *_anchorFinderUsername;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *anchorFinderUsername; // @synthesize anchorFinderUsername=_anchorFinderUsername;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
- (void)fetchThemeItemsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithObjectId:(unsigned long long)arg1 liveId:(unsigned long long)arg2 anchorFinderUsername:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

