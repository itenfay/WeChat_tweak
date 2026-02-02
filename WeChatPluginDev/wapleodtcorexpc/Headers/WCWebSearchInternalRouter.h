//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCWebSearchInternalRouter
{
    _Bool _detailPageEditingFlag;
}

@property(nonatomic) _Bool detailPageEditingFlag; // @synthesize detailPageEditingFlag=_detailPageEditingFlag;
- (void)launchDetailSearch:(id)arg1 isFromVoice:(_Bool)arg2;
- (void)launchDetailPage:(id)arg1;
- (void)markDetailPageEditing;

@end

