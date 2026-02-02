//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo, WCFinderJumpInfo;

@interface MMFinderLiveSyncPromotionInfo : NSObject
{
    _Bool _isAudience;
    unsigned int _promoteStatus;
    unsigned int _panelShowTime;
    unsigned long long _joinAudienceNumber;
    WCFinderJumpInfo *_promotePanelInfo;
    FinderJumpInfo *_oriPromotePanelInfo;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int panelShowTime; // @synthesize panelShowTime=_panelShowTime;
@property(retain, nonatomic) FinderJumpInfo *oriPromotePanelInfo; // @synthesize oriPromotePanelInfo=_oriPromotePanelInfo;
@property(retain, nonatomic) WCFinderJumpInfo *promotePanelInfo; // @synthesize promotePanelInfo=_promotePanelInfo;
@property(nonatomic) unsigned int promoteStatus; // @synthesize promoteStatus=_promoteStatus;
@property(nonatomic) unsigned long long joinAudienceNumber; // @synthesize joinAudienceNumber=_joinAudienceNumber;
@property(nonatomic) _Bool isAudience; // @synthesize isAudience=_isAudience;
- (id)description;
- (void)copyFromAuthorPromotionInfoResp:(id)arg1;
- (void)copyFromAudiencePromotionInfoResp:(id)arg1;
- (id)initWithAuthorPromotionInfoResp:(id)arg1;
- (id)initWithAudiencePromotionInfoResp:(id)arg1;

@end

