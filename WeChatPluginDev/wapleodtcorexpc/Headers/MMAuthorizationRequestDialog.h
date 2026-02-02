//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMAuthorizationRequestDialog
{
    CDUnknownBlockType _aggreeBlock;
    CDUnknownBlockType _rejectBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType rejectBlock; // @synthesize rejectBlock=_rejectBlock;
@property(copy, nonatomic) CDUnknownBlockType aggreeBlock; // @synthesize aggreeBlock=_aggreeBlock;
- (id)genCommonButtonsView;
- (id)init;

@end

