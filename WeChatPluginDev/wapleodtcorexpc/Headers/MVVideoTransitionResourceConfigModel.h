//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MVVideoTransitionResourceConfigModelName, NSString;

@interface MVVideoTransitionResourceConfigModel
{
    _Bool _isShowInPanel;
    NSString *_transitionId;
    MVVideoTransitionResourceConfigModelName *_transitionName;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isShowInPanel; // @synthesize isShowInPanel=_isShowInPanel;
@property(retain, nonatomic) MVVideoTransitionResourceConfigModelName *transitionName; // @synthesize transitionName=_transitionName;
@property(retain, nonatomic) NSString *transitionId; // @synthesize transitionId=_transitionId;

@end

