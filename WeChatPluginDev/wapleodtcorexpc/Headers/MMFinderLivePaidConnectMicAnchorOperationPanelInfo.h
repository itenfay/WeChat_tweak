//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo, NSArray;

@interface MMFinderLivePaidConnectMicAnchorOperationPanelInfo : NSObject
{
    unsigned long long _serviceCount;
    FinderJumpInfo *_historyJumpInfo;
    FinderJumpInfo *_ratingJumpInfo;
    double _serviceRating;
    NSArray *_connectedUserList;
    NSArray *_applyingUserList;
}

+ (id)fromPurchaseMicInfoResp:(id)arg1 allMicUsersList:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *applyingUserList; // @synthesize applyingUserList=_applyingUserList;
@property(retain, nonatomic) NSArray *connectedUserList; // @synthesize connectedUserList=_connectedUserList;
@property(nonatomic) double serviceRating; // @synthesize serviceRating=_serviceRating;
@property(retain, nonatomic) FinderJumpInfo *ratingJumpInfo; // @synthesize ratingJumpInfo=_ratingJumpInfo;
@property(retain, nonatomic) FinderJumpInfo *historyJumpInfo; // @synthesize historyJumpInfo=_historyJumpInfo;
@property(nonatomic) unsigned long long serviceCount; // @synthesize serviceCount=_serviceCount;

@end

