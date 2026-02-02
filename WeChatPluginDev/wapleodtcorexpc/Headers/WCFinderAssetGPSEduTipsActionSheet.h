//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderAssetGPSEduTipsActionSheet : NSObject
{
    NSString *_finderPostSessionid;
}

@property(copy, nonatomic) NSString *finderPostSessionid; // @synthesize finderPostSessionid=_finderPostSessionid;
- (void)bindCancelButton:(id)arg1;
- (void)bindAcceptButton:(id)arg1;
- (void)bindContainerView:(id)arg1;
- (id)getEduTipsActionSheetConfig;

@end

