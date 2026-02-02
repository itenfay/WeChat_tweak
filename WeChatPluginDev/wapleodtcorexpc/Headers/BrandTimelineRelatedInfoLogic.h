//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol BrandTimelineRelatedInfoLogicDelegate;

@interface BrandTimelineRelatedInfoLogic
{
    id <BrandTimelineRelatedInfoLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <BrandTimelineRelatedInfoLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getRelatedInfoWithReaderWrap:(id)arg1;
- (id)getPageIdentifierForReaderWrap:(id)arg1;
- (void)checkAndUpdateRelatedInfoWithMsgArr:(id)arg1;
- (void)checkAndUpdateVisibleMsgsRelatedInfo;

@end

