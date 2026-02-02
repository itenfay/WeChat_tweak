//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderDataItem;

@interface MMLiveAvatarBackgroundViewDataItemDataSource : NSObject
{
    WCFinderDataItem *_dataItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(readonly, nonatomic) NSString *anchorIdentityId;
@property(readonly, nonatomic) _Bool isKtvMode;
@property(readonly, nonatomic) _Bool isAnchor;
@property(readonly, nonatomic) NSString *coverImageUri;
@property(readonly, nonatomic) NSString *adCoverImageUri;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

