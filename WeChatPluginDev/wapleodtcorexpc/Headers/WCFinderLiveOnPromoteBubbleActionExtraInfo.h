//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCFinderLiveOnPromoteBubbleActionExtraInfo : NSObject
{
    _Bool _isFromDetailNotice;
    unsigned int _entranceType;
    unsigned int _liveType;
    NSString *_extra;
    NSString *_idOfCouponBindToNotice;
    NSDictionary *_otherActionResults;
}

+ (id)extra:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int liveType; // @synthesize liveType=_liveType;
@property(retain, nonatomic) NSDictionary *otherActionResults; // @synthesize otherActionResults=_otherActionResults;
@property(nonatomic) unsigned int entranceType; // @synthesize entranceType=_entranceType;
@property(copy, nonatomic) NSString *idOfCouponBindToNotice; // @synthesize idOfCouponBindToNotice=_idOfCouponBindToNotice;
@property(nonatomic) _Bool isFromDetailNotice; // @synthesize isFromDetailNotice=_isFromDetailNotice;
@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
- (id)onPromoteBubbleActionExtraInfo;
@property(readonly, copy, nonatomic) CDUnknownBlockType liveType_link;
@property(readonly, copy, nonatomic) CDUnknownBlockType otherActionResults_link;
@property(readonly, copy, nonatomic) CDUnknownBlockType entranceType_link;
@property(readonly, copy, nonatomic) CDUnknownBlockType isFromDetailNotice_link;
@property(readonly, copy, nonatomic) CDUnknownBlockType idOfCouponBindToNotice_link;
@property(readonly, copy, nonatomic) CDUnknownBlockType extra_link;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

