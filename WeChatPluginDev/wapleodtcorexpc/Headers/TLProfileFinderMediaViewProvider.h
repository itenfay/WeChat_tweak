//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderDataItem;

@interface TLProfileFinderMediaViewProvider : NSObject
{
    _Bool _invalid;
    unsigned int type;
    NSString *_objectID;
    NSString *_nonceID;
    WCFinderDataItem *_dataItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool invalid; // @synthesize invalid=_invalid;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(retain, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(nonatomic) unsigned int type; // @synthesize type;
- (_Bool)isInvalid;
- (id)reportSourceFeedId;
- (id)mediaDescription;
- (_Bool)allowReferBackground;
- (id)mediaCoverView;
- (id)mediaContentView;
- (_Bool)doHeadImageActionWithViewController:(id)arg1;
- (_Bool)doSourceActionWithViewController:(id)arg1;
@property(readonly, nonatomic) _Bool useCoverForContent;
- (id)customView;
@property(readonly, nonatomic) _Bool preferCustomView;
- (id)headImageView;
@property(readonly, nonatomic) NSString *expandableHeaderAccessibilityLabel;
- (id)title;
- (void)updateInvalidAndGetDetailDataItemIfNeeded;
- (id)initWithFinderObjectID:(id)arg1 nonceID:(id)arg2;
- (_Bool)supportCustomMedia;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool hidesBlurForShortHeightMedias;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly) Class superclass;

@end

