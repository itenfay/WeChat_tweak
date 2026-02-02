//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCFinderJoinGroupBuyEduActionSheetDelegate;

@interface WCFinderJoinGroupBuyEduActionSheet : NSObject
{
    id <WCFinderJoinGroupBuyEduActionSheetDelegate> _reportDelegate;
}

@property(nonatomic) __weak id <WCFinderJoinGroupBuyEduActionSheetDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
- (void)bindContainerView:(id)arg1;
- (void)bindAcceptButton:(id)arg1;
- (id)getEduTipsActionSheetConfig;

@end

