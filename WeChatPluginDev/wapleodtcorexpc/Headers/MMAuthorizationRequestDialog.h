//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface MMAuthorizationRequestDialog : NSObject
{
    CDUnknownBlockType _aggreeBlock;
    CDUnknownBlockType _rejectBlock;
}

@property(copy, nonatomic) CDUnknownBlockType rejectBlock; // @synthesize rejectBlock=_rejectBlock;
@property(copy, nonatomic) CDUnknownBlockType aggreeBlock; // @synthesize aggreeBlock=_aggreeBlock;
- (id)genCommonButtonsView;
- (id)init;

@end
