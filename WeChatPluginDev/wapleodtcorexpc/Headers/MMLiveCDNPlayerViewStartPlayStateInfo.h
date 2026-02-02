//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveStreamTypeInfo;

@interface MMLiveCDNPlayerViewStartPlayStateInfo : NSObject
{
    _Bool _hasReceivedCurrentAnchorSEI;
    _Bool _hasReceivedOtherAnchorSEI;
    _Bool _hasReceivedMicUsersList;
    MMFinderLiveStreamTypeInfo *_finderLiveStreamTypeInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasReceivedMicUsersList; // @synthesize hasReceivedMicUsersList=_hasReceivedMicUsersList;
@property(nonatomic) _Bool hasReceivedOtherAnchorSEI; // @synthesize hasReceivedOtherAnchorSEI=_hasReceivedOtherAnchorSEI;
@property(nonatomic) _Bool hasReceivedCurrentAnchorSEI; // @synthesize hasReceivedCurrentAnchorSEI=_hasReceivedCurrentAnchorSEI;
@property(retain, nonatomic) MMFinderLiveStreamTypeInfo *finderLiveStreamTypeInfo; // @synthesize finderLiveStreamTypeInfo=_finderLiveStreamTypeInfo;

@end

